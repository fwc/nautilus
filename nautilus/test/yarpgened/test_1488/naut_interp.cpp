/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1488
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1488
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
void test(val<long long int> var_3, val<unsigned char> var_4, val<unsigned short> var_8, val<signed char> var_9, val<int> zero, val<short*> var_13, val<unsigned short*> var_14, val<unsigned short*> var_15) {
    *var_13 = ((/* implicit */val<short>) var_3);
    *var_14 = ((/* implicit */val<unsigned short>) var_4);
    *var_15 = ((/* implicit */val<unsigned short>) (((((+(var_3))) != (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)0)) < (((/* implicit */val<int>) var_8)))))))) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) (val<short>)8791))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8971813198861046389LL;
unsigned char var_4 = (unsigned char)177;
unsigned short var_8 = (unsigned short)39695;
signed char var_9 = (signed char)-44;
int zero = 0;
short var_13 = (short)18895;
unsigned short var_14 = (unsigned short)35574;
unsigned short var_15 = (unsigned short)32145;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)-4725;
    value_mismatch |= var_14 != (unsigned short)177;
    value_mismatch |= var_15 != (unsigned short)65492;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_8, var_9, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
