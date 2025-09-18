/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2632
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2632
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
void test(val<short> var_0, val<unsigned char> var_3, val<bool> var_5, val<bool> var_6, val<unsigned char> var_8, val<unsigned long long int> var_9, val<unsigned short> var_10, val<int> zero, val<bool*> var_19, val<unsigned char*> var_20, val<long long int*> var_21) {
    *var_19 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_3))));
    *var_20 = ((/* implicit */val<unsigned char>) (-(((var_6) ? (var_9) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) max((var_0), (((/* implicit */val<short>) var_5))))))))));
    *var_21 |= ((/* implicit */val<long long int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)768;
unsigned char var_3 = (unsigned char)121;
bool var_5 = (bool)0;
bool var_6 = (bool)1;
unsigned char var_8 = (unsigned char)211;
unsigned long long int var_9 = 9442222958096876709ULL;
unsigned short var_10 = (unsigned short)5109;
int zero = 0;
bool var_19 = (bool)1;
unsigned char var_20 = (unsigned char)147;
long long int var_21 = 5460071399237784459LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned char)91;
    value_mismatch |= var_21 != 5460071399237784575LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_6, var_8, var_9, var_10, zero, &var_19, &var_20, &var_21);
  checksum();
}
