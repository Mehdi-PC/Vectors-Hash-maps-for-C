# How to use it
to use it you have to do typev_add(address, what to add) or typev_rm(address, item count 0 1 2 3 4 ...)
types are cTypev llongv ldoublev the multiple keyword ones are diffrent for long long you do llong and for long double ldouble and v is for vector h is for hashmap
hash maps are the same they just use the h like this
```c
inth x = {key, val};
```
dont forget they are just structs with functions that let them work
i will add adding thing to any slot you would want to the vector instead of only adding to the last one later

# New features
- added the feature to put the data at any index
- fixed the bug where no other type except intv couldnt be added items

```c
int intv_add(intv* to, int this, int count);
```
where count is to specify which index you want to put the new item
```c
intv x;
x.max = 2;
x.itemc = 1;
x.data = malloc(2 * sizeof(int));
x.data[0] = 52;
// now x = [52, NULL, 43]
x.data[1] = x.data[2];
x.data[2] = 0;
// now x = [52, 43]
```
also there is a v version of all types but long double and long long's have llong ldouble at both v and h so llong(v/h) ldouble(v/h) other than that they are the same like floatv
- i will make typev_rm(); better later to shift items when some item is removed
