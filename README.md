
> C++ WinAPI를 이용하여 두개의 슈팅 게임을 개발하였습니다. 대학교 2학년 2학기에 작업을 하였으며, 각각 대학교 과제와 스스로 공부를 하면서 제작 한 게임으로, Unity의 게임 프레임워크 구조를 이해하고 따라하여 만든 게임입니다.  
>   

## 📺 미리 보기

![](https://blog.kakaocdn.net/dn/bUGp9k/btsvkRy55jA/PNMkCykuQxt8RIGzNRz4Jk/img.gif)![](https://blog.kakaocdn.net/dn/mGvWD/btsvdq3uq8H/KW2Mx9CrKkvnxw5oBubv3K/img.gif)

  

## 💬 프로젝트 간단 설명

-   게임 개발에 대한 이해도가 높아져 Unity 엔진의 게임 프레임워크 구조를 모방하여 제작한 게임입니다.
-   Unity에서 볼 수 있는 GameObject에서 제공하는 기본적인 함수를 구현하여 Unity와 동일한 구조를 가지도록 의도하여 제작하였습니다.
-   게임에서 사용하는 플레이어 객체 등 오브젝트는 Unity의 MonoBehavior을 상속받듯이 GameObject를 상속받아 사용합니다.
-   모든 게임 오브젝트를 상속받는 객체는 ObjectManager에서 관리되어 프레임(Update)별로 각 행동을 검사하여 충돌처리나 움직임, 상태확인 등을 수행합니다.
-   Time.DeltaTime 개념을 적용하여 더 이상 Sleep()를 사용하지 않아 자연스러운 움직임 등 프레임 관리가 가능합니다.
