/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7207
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7207
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
void test(val<long long int> var_0, val<unsigned short> var_2, val<unsigned char> var_6, val<unsigned char> var_8, val<unsigned char> var_9, val<short> var_10, val<int> zero, val<unsigned char*> var_11, val<signed char*> var_12, val<signed char*> var_13, val<unsigned int*> var_14, val<bool*> var_15) {
    *var_11 = ((/* implicit */val<unsigned char>) var_10);
    if (((/* implicit */val<bool>) var_0))
    {
        if ((!((!(((/* implicit */val<bool>) (+(2449111694684853573LL))))))))
        {
            *var_12 = ((/* implicit */val<signed char>) var_2);
            *var_13 = ((/* implicit */val<signed char>) var_8);
        }

        *var_14 = ((/* implicit */val<unsigned int>) max((var_9), (((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)15)) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<unsigned char>)255))))))))));
    }

    *var_15 = ((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned char>) min((-2449111694684853576LL), (-2449111694684853574LL)))))) ^ (((((val<bool>) 2449111694684853573LL)) ? (min((-2449111694684853565LL), (((/* implicit */val<long long int>) 395904833)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5146759094179836374LL;
unsigned short var_2 = (unsigned short)4161;
unsigned char var_6 = (unsigned char)245;
unsigned char var_8 = (unsigned char)109;
unsigned char var_9 = (unsigned char)154;
short var_10 = (short)-20776;
int zero = 0;
unsigned char var_11 = (unsigned char)217;
signed char var_12 = (signed char)-55;
signed char var_13 = (signed char)-90;
unsigned int var_14 = 2474773548U;
bool var_15 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)216;
    value_mismatch |= var_12 != (signed char)65;
    value_mismatch |= var_13 != (signed char)109;
    value_mismatch |= var_14 != 154U;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
