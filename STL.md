# STL 基礎
## 遍歷
```cpp!
for(auto i : v){};
```
## vector
### 觀念
可動態新增元素且能改變長度，不用事先宣告固定大小，且能支援原有的操作
### 宣告
```cpp!
vector<int> v; // 宣告 元素型態為 int 的 vector
```
### 基本
| 操作 | 說明 | 複雜度 |
|------|------|--------|
| `v[i]` | 讀取第 i 項 | O(1) |
| `v.empty()` | 判斷是否為空 | O(1) |
| `v.size()` | 回傳目前長度 | O(1) |
| `v.front()` / `v.back()` | 取首項 / 末項 | O(1) |
| `v.begin()` / `v.end()` | 回傳首／尾 iterator | O(1) |
### 修改
| 操作 | 說明 | 複雜度 |
|------|------|--------|
| `v.clear()` | 清空元素（保留容量） | O(n) |
| `v.resize(S, val)` | 調整大小到 S，填 val 或裁剪 | O(n) |
| `v.reserve(S)` | 預留 S 個空間，不改變 size | O(n) |
| `v.capacity()` | 回傳預分配容量 | O(1) |

### 新增與刪除

| 操作 | 說明 | 複雜度 |
|------|------|--------|
| `v.push_back(val)` | 尾端加入元素 | 平均 O(1) |
| `v.pop_back()` | 移除最後一項（不可空） | O(1) |
| `v.insert(it, val)` | 在指定位置插入 | O(n) |
| `v.erase(it)` | 移除指定位置元素 | O(n) |

### algorithm

| 操作 | 說明 | 複雜度 |
|------|------|--------|
| `swap(v1, v2)` / `v1.swap(v2)` | 交換兩 vector | O(1) |
| `find(v.begin(), v.end(), val)` | 查找元素，回傳 iterator | O(n) |
| `count(v.begin(), v.end(), val)` | 統計出現次數 | O(n) |
| `replace(v.begin(), v.end(), val, new_val)` | 替換所有指定值 | O(n) |
| `sort(v.begin(), v.end())` | 遞增排序 | O(n log n) |
| `reverse(v.begin(), v.end())` | 反轉順序 | O(n) |
| `merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin())` | 合併兩已排序 vector 至 v3 | O(n) |

---

## pair
### 觀念
可將兩個型態的資料合併，透過成員 first 和 second 來存取元素，pair 也可以元素字典序來比較或排序，以 first 為優先
### 宣告
```cpp!
pair<int, string> p; // 宣告元素型態為 int 和 string 的 pair
```
### 基本

| 語法 | 說明 | 複雜度 |
|------|------|--------|
| `p = make_pair(a, b);` | 使用 make_pair 將 a, b 結合 | O(1) |
| `p.first` | 取得第一個值 | O(1) |
| `p.second` | 取得第二個值 | O(1) |
| `p.first = x;` | 修改第一個值 | O(1) |
| `p.second = y;` | 修改第二個值 | O(1) |

### 比較與交換

| 語法 | 說明 | 複雜度 |
|------|------|--------|
| `a < b` | 比較 pair（先比 first，再比 second） | O(1) |
| `swap(a, b) / a.swap(b)` | 交換兩個 pair | O(1) |

## stack
### 觀念
後進先出 Last In First Out
### 宣告
```cpp!
stack<int> s; // 宣告元素型態為 int 的 stack
```
### 基本
| 操作方法 | 說明 | 複雜度 |
|----------|----------|--------|
| `s.size()` | 取得 s 大小 | O(1) |
| `s.empty()` | 回傳 s 是否為空 | O(1) |
| `s.top()` | 取得 s 頂端元素 | O(1) |
| `s.push(val)` | 將 val 放入 s 頂端 | O(1) |
| `s.pop()` | 移除 s 頂端元素 | O(1) |

## queue
### 觀念
先進先出 First In First Out
### 宣告
```cpp!
queue<int> q; // 宣告元素型態為 int 的 queue
```
### 基本
| 操作方法 | 說明 | 複雜度 |
|----------|----------|--------|
| `q.size()` | 取得 q 長度 | O(1) |
| `q.empty()` | 回傳 q 是否為空 | O(1) |
| `q.front()` | 取得 q 最前端（第一個加入的）元素 | O(1) |
| `q.back()` | 取得 q 最尾端（最後加入的）元素 | O(1) |
| `q.push(val)` | 將 val 加入 q 尾端 | O(1) |
| `q.pop()` | 移除 q 最前端元素 | O(1) |

## deque
### 觀念
前後都可以使用加入和移除操作的 queue
### 宣告
```cpp!
deque<int> dq; // 宣告元素型態為 int 的 deque
```
### 基本
| 操作方法 | 說明 | 複雜度 |
|----------|----------|--------|
| `dq.size()` | 取得 dq 長度 | O(1) |
| `dq.empty()` | 回傳 dq 是否為空 | O(1) |
| `dq.push_front(val)`| 將 val 加入 dq 前端 | O(1) |
| `dq.push_back(val)`  | 將 val 加入 dq 尾端 | O(1) |
| `dq.pop_front()` | 移除 dq 最前端元素 | O(1) |
| `dq.pop_back()` | 移除 dq 最尾端元素 | O(1) |

## priority_queue
### 觀念
資料預設由大到小排序，即優先權高的資料會先被取出的 queue
### 宣告
```cpp!
priority_queue<int> pq; // 宣告元素型態為 int 的 priority_queue
```
### 基本
| 操作方法 | 說明 | 複雜度 |
|----------|----------|--------|
| `pq.size()` | 取得 pq 長度 | O(1) |
| `pq.empty()` | 回傳 pq 是否為空 | O(1) |
| `pq.top()` | 回傳 pq 中最大或最小的元素 | O(1) |
| `pq.push(val)`| 將 val 加入 pq 中 | O(log n) |
| `pq.pop()` | 移除 pq 中最大或最小的元素 | O(log n) |

## set
### 觀念
去除重複的元素，資料由小到大排序
### 宣告
```cpp!
set<int> s; // 宣告元素型態為 int 的 set
```
### 基本
| 操作方法 | 功能介紹 | 複雜度 |
|----------|----------|--------|
| `s.size()` | 取得 s 長度 | O(1) |
| `s.empty()` | 回傳 s 是否為空 | O(1) |
| `s.insert(k)` | 插入鍵值為 k 的元素（若已存在則無事發生） | O(log n) |
| `s.erase(k)` | 刪除鍵值為 k 的元素，回傳刪除個數 | O(log n) |
| `s.erase(it)` / `s.erase(it1, it2)` | 刪除單一或區間元素 `[first, last)` | O(k)（k 為刪除個數） |
| `s.find(k)` | 回傳指向鍵值為 k 的 iterator，找不到回傳 `s.end()` | O(log n) |
| `s.count(k)` | 回傳鍵值為 k 的元素個數（對 set 為 0 或 1） | O(log n) |
## map
### 觀念
存放 key-value pairs 的資料結構，會按 key 由小到大排序
### 宣告
```cpp!
map<string, int> m; // 宣告 Key 為 string, value 為 int 的 map
```
### 基本
| 操作方法 | 說明 | 複雜度 |
|----------|----------|--------|
| `m[k]` | 取得或插入鍵 k 的值（若 k 不存在，會自動插入） | O(log n) |
| `m.at(k)` | 取得鍵 k 的值（若不存在會拋出例外） | O(log n) |
| `m.insert({k, v})` | 插入一對鍵值（若 k 已存在則不更新） | O(log n) |
| `m.erase(k)` | 刪除鍵為 k 的元素 | O(log n) |
| `m.erase(it)` / `m.erase(it1, it2)` | 刪除指定 iterator 或區間 | O(k)（k 為刪除數量） |
| `m.find(k)` | 回傳指向鍵 k 的 iterator，找不到回傳 `m.end()` | O(log n) |
| `m.count(k)` | 是否存在鍵 k（回傳 0 或 1） | O(log n) |