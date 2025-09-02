/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1131
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1131
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
void test(val<unsigned long long int> var_0, val<unsigned char> var_6, val<unsigned short> var_11, val<unsigned char> var_13, val<int> zero, val<bool*> var_15, val<unsigned short*> var_16) {
    *var_15 -= ((/* implicit */val<bool>) ((val<long long int>) min((max((((/* implicit */val<unsigned long long int>) var_11)), (var_0))), (((/* implicit */val<unsigned long long int>) ((val<long long int>) var_6))))));
    *var_16 = ((/* implicit */val<unsigned short>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12603833743671407218ULL;
unsigned char var_6 = (unsigned char)44;
unsigned short var_11 = (unsigned short)544;
unsigned char var_13 = (unsigned char)163;
int zero = 0;
bool var_15 = (bool)1;
unsigned short var_16 = (unsigned short)20472;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != (unsigned short)163;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_11, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
