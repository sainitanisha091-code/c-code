#include<stdio.h>
int main(){
    int math_score , science_score , english_score ; 
    scanf("%d%d%d", &math_score , &science_score , &english_score);
    int sum = math_score + science_score + english_score;
    int average = sum/3;
    if (math_score  > 80 && science_score >80  && english_score >80){
        printf("Excellent! You are an all-rounder");
    }
    else if (math_score >=90 && (science_score > 70 || english_score >70)){
        printf("focus on other subjects");
    }
    else if (average >= 75 ){
        printf("Good perfromoance , keep performing");
    }
    else{
        printf("You need to work harder");
    }
}