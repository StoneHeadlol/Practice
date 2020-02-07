// 헤더파일의 역할: 1. 상수 및 매크로의 정의  2. 함수의 형태에 대한 정의
// 보통 define, enum, struct의 헤더, 클래스 선언, 함수형 등을 여기에 작성. 변수 선언은 하지 말 것.

#ifndef _HEAD_H  // 헤더 가드. 전처리기 작업임.  #pragma once만 해줘도 되나 지원하지 않는 환경도 있음.
#define _HEAD_H

int sum(int a, int b);

#endif

