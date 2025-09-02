/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9526
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9526
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<int> var_2, val<long long int> var_4, val<long long int> var_5, val<int> var_6, val<unsigned short> var_7, val<bool> var_8, val<long long int> var_12, val<unsigned short> var_13, val<signed char> var_16, val<int> zero, val<int*> var_17, val<unsigned short*> var_18, val<bool*> var_19, val<int*> var_20, val<unsigned char*> var_21, val<bool*> var_22, val<unsigned long long int*> var_23) {
    if (((/* implicit */val<bool>) max((((/* implicit */val<signed char>) var_8)), (var_16))))
    {
        *var_17 = ((/* implicit */val<int>) max((((/* implicit */val<long long int>) max((((/* implicit */val<unsigned short>) (val<signed char>)-105)), ((val<unsigned short>)51958)))), (((var_4) ^ (((/* implicit */val<long long int>) var_6))))));
        *var_18 = ((/* implicit */val<unsigned short>) var_16);
        if (((/* implicit */val<bool>) ((((((var_4) ^ (((/* implicit */val<long long int>) var_2)))) ^ (max((-1006459419560428824LL), (var_12))))) - (max((((/* implicit */val<long long int>) (val<bool>)1)), ((+(var_5))))))))
        {
            *var_19 |= ((/* implicit */val<bool>) ((((-604581010776903604LL) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-15983))))) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)46583)))));
            *var_20 -= max((max((((/* implicit */val<int>) max(((val<unsigned short>)28559), (((/* implicit */val<unsigned short>) var_8))))), (var_2))), (((-1736533877) ^ (((/* implicit */val<int>) (val<bool>)1)))));
        }

        *var_21 = ((/* implicit */val<unsigned char>) max((((val<long long int>) max((var_6), (((/* implicit */val<int>) var_7))))), (((((/* implicit */val<bool>) ((val<unsigned short>) (val<bool>)1))) ? (3770591233918823717LL) : (((/* implicit */val<long long int>) 1736533875))))));
    }

    *var_22 = var_8;
    *var_23 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_13)) | (((/* implicit */val<int>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -929947828;
long long int var_4 = -977472952610242958LL;
long long int var_5 = 8157109771249564437LL;
int var_6 = -1445803390;
unsigned short var_7 = (unsigned short)62417;
bool var_8 = (bool)0;
long long int var_12 = 4701074587001014676LL;
unsigned short var_13 = (unsigned short)39667;
signed char var_16 = (signed char)-88;
int zero = 0;
int var_17 = 68637841;
unsigned short var_18 = (unsigned short)57823;
bool var_19 = (bool)1;
int var_20 = -1072069585;
unsigned char var_21 = (unsigned char)69;
bool var_22 = (bool)1;
unsigned long long int var_23 = 7010650236209333475ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 68637841;
    value_mismatch |= var_18 != (unsigned short)57823;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != -1072069585;
    value_mismatch |= var_21 != (unsigned char)69;
    value_mismatch |= var_22 != (bool)0;
    value_mismatch |= var_23 != 39667ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_7, var_8, var_12, var_13, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
