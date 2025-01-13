# 자료 구조와 시간 복잡도

## 자료 구조란?

자료구조(= 데이터 구조)는 **추상 자료형**(Abstract Data Type, ADT)입니다.  
추상 자료형은 객체의 **명세**(무엇, *what*)와 그 **연산의 명세**(어떻게, *how*)가 객체의 표현과 연산 구현으로부터 분리된 자료형입니다.

---

## 시간 복잡도의 계산

**시간 복잡도**는 알고리즘이 실행될 때 입력 크기 `n`에 대해 얼마나 많은 시간이 소요되는지를 나타내는 함수입니다. 시간 복잡도를 계산하는 과정은 다음과 같습니다:

1. **모든 문장의 수행 횟수**를 계산합니다. 이 결과는 입력 크기 `n`에 대한 **다항식**으로 나타납니다.
2. 다항식에서 **최고차항**만을 취합니다.
3. **계수**는 제거하고, 최고차항을 기반으로 시간 복잡도를 결정합니다.

---

## 시간 복잡도 계산 예시

다음 표는 입력 크기 `n`에 따라 **시간 복잡도**가 어떻게 변화하는지 보여줍니다.


```
| n         | 0.1n² + n + 100 | 0.1n²  | n    | 100  |
|-----------|-----------------|--------|------|------|
| 10        | 120             | 10     | 10   | 100  |
| 20        | 160             | 40     | 20   | 100  |
| 50        | 400             | 250    | 50   | 100  |
| 100       | 1,200           | 1,000  | 100  | 100  |
| 1,000     | 101,100         | 100,000| 1,000| 100  |
| 1,000,000 | 100,001,000,100 | 100,000,000,000 | 1,000,000 | 100  |
```

**최고차항**만을 취하는 이유는, 결국 **최고차항의 지수**가 실행 시간에 가장 큰 영향을 미치기 때문입니다.

---

## 시간 복잡도 종류

다음은 다양한 시간 복잡도 클래스입니다:

```
- O(n)
- O(n!)
- O(3n)
- O(2n)
- O(n⁴)
- O(n³)
- O(n²)
- O(n√n)
- O(n log n)
- O(n log* n)
- O(n)
- O(√n)
- O(log n)
- O(log* n)
- O(1)
```


---

## 시간 복잡도에 따른 최대 입력 크기

시간 복잡도에 따른 최대 입력 크기는 알고리즘이 처리할 수 있는 데이터의 크기를 결정합니다. 일반적인 CPU 기반의 PC나 채점용 컴퓨터에서 1초에 실행할 수 있는 최대 연산 횟수는 약 **1억 번**입니다.

```
| 시간 복잡도   | 최대 입력 크기   |
|---------------|------------------|
| O(log n)      | 무제한 (~?)      |
| O(n)          | 약 1억 개        |
| O(n log n)    | 약 300만 개      |
| O(n²)         | 약 1만 개        |
| O(n³)         | 약 500 개        |
| O(2ⁿ)         | 약 20 개         |
| O(n!)         | 약 10 개         |
```


---

## 결론

시간 복잡도는 알고리즘의 효율성을 평가하는 중요한 지표입니다. 알고리즘의 시간 복잡도를 이해하고 이를 바탕으로 최적화된 코드를 작성하는 것이 **소프트웨어 개발**에서 매우 중요합니다. 알고리즘을 설계할 때 시간 복잡도를 고려하는 것은 프로그램의 **성능**을 크게 향상시킬 수 있습니다.

---
