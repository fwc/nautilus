/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3549
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3549
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
void test(val<long long int> var_3, val<bool> var_6, val<signed char> var_7, val<bool> var_8, val<unsigned short> var_17, val<int> zero, val<unsigned char*> var_20, val<unsigned short*> var_21) {
    *var_20 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) min((-2062949027), (((/* implicit */val<int>) var_8))))) && (((/* implicit */val<bool>) (+((~(((/* implicit */val<int>) var_6)))))))));
    *var_21 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) ((val<unsigned short>) var_7))) <= (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) == (var_3)))), (var_17))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7721686756026883913LL;
bool var_6 = (bool)0;
signed char var_7 = (signed char)110;
bool var_8 = (bool)0;
unsigned short var_17 = (unsigned short)53555;
int zero = 0;
unsigned char var_20 = (unsigned char)175;
unsigned short var_21 = (unsigned short)27260;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)1;
    value_mismatch |= var_21 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_7, var_8, var_17, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
