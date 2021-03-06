#pragma once

#include <QObject>

class TestChallenges : public QObject
{
    Q_OBJECT

public:
    TestChallenges(QObject *parent = nullptr);
    ~TestChallenges();

    // Easy Challenges
    void Test_AlphabetSoup();
    void Test_ArithGeo();
    void Test_NumberCheck();
    void Test_Fibonacci();
    void Test_FindIntersection();
    void Test_FirstFactorial();
    void Test_StringReverse();
    void Test_LetterChanges();
    void Test_LetterCapitalize();
    void Test_LongestWord();
    void Test_Palindrome();
    void Test_PowersOfTwo();
    void Test_ProductDigits();
    void Test_OtherProducts();
    void Test_RemoveBrackets();
    void Test_QuestionMarks();
    void Test_SimpleAdding();
    void Test_SimpleSymbols();
    void Test_StringPeriods();
    void Test_TimeConverter();
    void Test_VowelSquares();
    void Test_UsernameValidation();
    void Test_MovingMedian();

    // Medium Challenges
    void Test_ConsecutiveNumbers();
    void Test_KUniqueCharacters();
    void Test_NumberEncoder();
    void Test_PrimeMover();
    void Test_RunLength();
    void Test_StringReduction();
    void Test_MinWindowSubstring();
    void Test_TreeConstructor();
    void Test_PreorderTraversal();

    // Hard Challenges
    void Test_ChessboardTraveling();
    void Test_KaprekarsConstant();
    void Test_MatrixDeterminant();

    protected:
    void Test_PrintArray(int* arr, int length);
    void Test_PrintArray(QStringList strArr);
};
 