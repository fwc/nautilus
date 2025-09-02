/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2260
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2260
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
void test(val<unsigned char> var_4, val<bool> var_8, val<short> var_9, val<unsigned long long int> var_10, val<unsigned long long int> var_11, val<unsigned long long int> var_15, val<int> zero, val<bool*> var_18, val<unsigned char*> var_19, val<unsigned long long int*> var_20) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)14)) ? (((((/* implicit */val<bool>) (val<unsigned short>)32260)) ? (17035239588337872048ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)255))))) : (((((/* implicit */val<bool>) (val<unsigned short>)32260)) ? (11418027634666863221ULL) : (18446744073709551615ULL)))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) : (var_15))))
    {
        *var_18 = ((/* implicit */val<bool>) var_9);
        *var_19 = ((/* implicit */val<unsigned char>) var_10);
    }

    *var_20 = max(((((+(var_11))) / (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))))), (((var_11) % (var_15))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)202;
bool var_8 = (bool)0;
short var_9 = (short)1142;
unsigned long long int var_10 = 9544103613920798411ULL;
unsigned long long int var_11 = 8128983707402859162ULL;
unsigned long long int var_15 = 5510175609120675731ULL;
int zero = 0;
bool var_18 = (bool)0;
unsigned char var_19 = (unsigned char)37;
unsigned long long int var_20 = 6554666016657844458ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != (unsigned char)37;
    value_mismatch |= var_20 != 2618808098282183431ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, var_9, var_10, var_11, var_15, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
