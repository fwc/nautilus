/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9249
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9249
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
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
void test(val<unsigned int> var_1, val<unsigned char> var_3, val<int> var_6, val<int> var_8, val<unsigned char> var_13, val<unsigned char> var_15, val<int> zero, val<int*> var_17, val<long long int*> var_18, val<unsigned char*> var_19, val<unsigned char*> var_20, val<int*> var_21) {
    *var_17 = ((/* implicit */val<int>) ((((var_8) > (((/* implicit */val<int>) var_13)))) || (((((/* implicit */val<bool>) (-(2111614038)))) || (((/* implicit */val<bool>) (-2147483647 - 1)))))));
    *var_18 = ((/* implicit */val<long long int>) var_8);
    *var_19 = ((/* implicit */val<unsigned char>) ((((((((/* implicit */val<bool>) (val<unsigned char>)166)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)63437))) : (0U))) / (((/* implicit */val<unsigned int>) var_6)))) / (((var_1) - (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned char>)95)) % (((/* implicit */val<int>) (val<unsigned char>)120)))))))));
    *var_20 = var_15;
    *var_21 = ((/* implicit */val<int>) ((-876485446244466789LL) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2701871859U;
unsigned char var_3 = (unsigned char)106;
int var_6 = -892771257;
int var_8 = -1908934013;
unsigned char var_13 = (unsigned char)142;
unsigned char var_15 = (unsigned char)218;
int zero = 0;
int var_17 = 62463650;
long long int var_18 = 2151645337559736189LL;
unsigned char var_19 = (unsigned char)194;
unsigned char var_20 = (unsigned char)126;
int var_21 = -427260581;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 1;
    value_mismatch |= var_18 != -1908934013LL;
    value_mismatch |= var_19 != (unsigned char)0;
    value_mismatch |= var_20 != (unsigned char)218;
    value_mismatch |= var_21 != 1707900721;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_8, var_13, var_15, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
