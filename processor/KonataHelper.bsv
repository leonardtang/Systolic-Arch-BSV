
typedef Bit#(48) KonataId; 
typedef Bit#(8) ThreadId;

// function Action konataInit();
//     action 
//         $display("[KONATA]Kanata\t0004");
//         $display("[KONATA]C=\t1");
//     endaction
// endfunction


function Action konataTic(File f);
    action 
        $fdisplay(f, "C\t1");
    endaction
endfunction

function ActionValue#(KonataId) declareKonataInst(File f, Reg#(KonataId) konataCtr,ThreadId tid);
    actionvalue
        konataCtr <= konataCtr + 1;
        $fdisplay(f,"I\t%d\t%d\t%d",konataCtr,konataCtr,tid);
        return konataCtr;
    endactionvalue
endfunction

function ActionValue#(KonataId) fetch1Konata(File f, Reg#(KonataId) konataCtr,ThreadId tid);
    // Include the declaration of the instr
    actionvalue
        konataCtr <= konataCtr + 1;
        $fdisplay(f,"I\t%d\t%d\t%d",konataCtr,konataCtr,tid);
        $fdisplay(f,"S\t%d\t%d\t%s",konataCtr,0,"F");
        return konataCtr;
    endactionvalue
endfunction

function ActionValue#(KonataId) nfetchKonata(File f, Reg#(KonataId) konataCtr,ThreadId tid, Integer k);
    // Return the first id of the consecutive k id allocated
    actionvalue
        konataCtr <= konataCtr + fromInteger(k);
        for (Integer j = 0; j < k; j = j + 1) begin 
            $fdisplay(f,"S\t%d\t%d\t%s",konataCtr + fromInteger(j),0,"F");
        end
        return konataCtr;
    endactionvalue
endfunction

function Action decodeKonata(File f, KonataId konataCtr);
    action
        // $display("E\t%d\t%d\t%s",konataCtr,0,"F");
        $fdisplay(f,"S\t%d\t%d\t%s",konataCtr,0,"D");
    endaction
endfunction
function Action executeKonata(File f, KonataId konataCtr);
    action
        // $display("E\t%d\t%d\t%s",konataCtr,0,"D");
        $fdisplay(f,"S\t%d\t%d\t%s",konataCtr,0,"E");
    endaction
endfunction
function Action writebackKonata(File f, KonataId konataCtr);
    action
        $fdisplay(f,"S\t%d\t%d\t%s",konataCtr,0,"W");
    endaction
endfunction

function Action squashKonata(File f, KonataId konataCtr);
    action
        // Squash have id 0
        $fdisplay(f,"R\t%d\t%d\t%d", konataCtr, 0, 1);
    endaction
endfunction

function Action commitKonata(File f, KonataId konataCtr, Reg#(KonataId) konataCmt);
    action
        konataCmt <= konataCmt + 1;
//        $display("[KONATA]E\t%d\t%d\t%s",konataCtr,0,"W");
        $fdisplay(f,"R\t%d\t%d\t%d", konataCtr, konataCmt,0);
    endaction
endfunction

function Action labelKonataLeft(File f, KonataId konataCtr, Fmt s);
    action
        // Squash have id 0
        $fdisplay(f, "L\t%d\t%d\t", konataCtr, 0, s);
    endaction
endfunction
function Action labelKonataMouse(File f, KonataId konataCtr, Fmt s);
    action
        // Squash have id 0
        $fdisplay(f, "L\t%d\t%d\t", konataCtr, 1, s);
    endaction
endfunction



