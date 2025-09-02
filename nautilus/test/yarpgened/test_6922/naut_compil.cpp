/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6922
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6922
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
void test(val<unsigned char> var_0, val<unsigned int> var_1, val<unsigned char> var_3, val<short> var_4, val<unsigned int> var_5, val<unsigned long long int> var_6, val<unsigned char> var_7, val<bool> var_8, val<signed char> var_10, val<int> zero, val<unsigned char*> var_11, val<unsigned char*> var_12, val<unsigned long long int*> var_13, val<signed char*> var_14, val<signed char*> var_15) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_3)) >> (((var_5) - (943552512U))))))
    {
        *var_11 = ((/* implicit */val<unsigned char>) var_5);
        *var_12 = ((/* implicit */val<unsigned char>) var_4);
        if (((/* implicit */val<bool>) max((((((val<bool>) var_1)) ? (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_10))))) : (var_5))), (((/* implicit */val<unsigned int>) max((((((/* implicit */val<bool>) (val<unsigned char>)49)) ? (((/* implicit */val<int>) (val<unsigned short>)60961)) : (((/* implicit */val<int>) (val<signed char>)63)))), (((/* implicit */val<int>) min((var_7), (((/* implicit */val<unsigned char>) var_8)))))))))))
        {
            *var_13 = ((/* implicit */val<unsigned long long int>) (((((-(((((/* implicit */val<int>) var_0)) ^ (((/* implicit */val<int>) (val<unsigned char>)255)))))) + (2147483647))) >> ((((+(((/* implicit */val<int>) (val<bool>)0)))) % ((+(((/* implicit */val<int>) (val<signed char>)6))))))));
            *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<bool>) 3221225472U)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)48142))) : (var_6)))))) % ((~(min((((/* implicit */val<long long int>) (val<unsigned char>)248)), (-3447533064552849256LL)))))));
        }

    }

    *var_15 = ((/* implicit */val<signed char>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
unsigned int var_1 = 1234554196U;
unsigned char var_3 = (unsigned char)138;
short var_4 = (short)17270;
unsigned int var_5 = 943552519U;
unsigned long long int var_6 = 12581233116486987430ULL;
unsigned char var_7 = (unsigned char)113;
bool var_8 = (bool)0;
signed char var_10 = (signed char)93;
int zero = 0;
unsigned char var_11 = (unsigned char)79;
unsigned char var_12 = (unsigned char)124;
unsigned long long int var_13 = 10539607287319373675ULL;
signed char var_14 = (signed char)-76;
signed char var_15 = (signed char)-37;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)7;
    value_mismatch |= var_12 != (unsigned char)118;
    value_mismatch |= var_13 != 2147483510ULL;
    value_mismatch |= var_14 != (signed char)14;
    value_mismatch |= var_15 != (signed char)113;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, var_6, var_7, var_8, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
