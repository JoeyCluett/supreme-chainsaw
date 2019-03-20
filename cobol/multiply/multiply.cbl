        IDENTIFICATION DIVISION.
            PROGRAM-ID. multiply-program.
            AUTHOR. Joey Cluett.

        DATA DIVISION.
            WORKING-STORAGE SECTION.
                01 Num1   PIC S9(2)V99   VALUE ZEROS.
                01 Num2   PIC S9(2)V99   VALUE ZEROS.
                01 Result PIC S9(4)V9999 VALUE ZEROS.

        PROCEDURE DIVISION.
            CalculateResult.
                ACCEPT Num1.
                ACCEPT Num2.
                MULTIPLY Num1 BY Num2 GIVING Result.
                DISPLAY "Result is = ", Result.        
        STOP RUN.


