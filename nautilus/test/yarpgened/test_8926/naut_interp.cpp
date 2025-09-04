/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8926
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8926
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
void test(val<unsigned int> var_0, val<unsigned char> var_1, val<short> var_2, val<long long int> var_3, val<unsigned short> var_6, val<unsigned short> var_7, val<unsigned char> var_8, val<int> zero, val<unsigned long long int*> var_10, val<unsigned int*> var_11, val<short*> var_12) {
    *var_10 = ((/* implicit */val<unsigned long long int>) (~(((((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_2))))) ? (((/* implicit */val<int>) ((val<signed char>) (val<unsigned short>)14))) : (((/* implicit */val<int>) var_1))))));
    *var_11 = ((/* implicit */val<unsigned int>) var_6);
    *var_12 = ((/* implicit */val<short>) min((((/* implicit */val<long long int>) ((val<unsigned short>) ((((/* implicit */val<int>) (val<short>)-1224)) == (((/* implicit */val<int>) var_8)))))), (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<long long int>) var_0)) : (var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3048872926U;
unsigned char var_1 = (unsigned char)56;
short var_2 = (short)25117;
long long int var_3 = 4387091295274604671LL;
unsigned short var_6 = (unsigned short)19572;
unsigned short var_7 = (unsigned short)54297;
unsigned char var_8 = (unsigned char)35;
int zero = 0;
unsigned long long int var_10 = 12104549282002270117ULL;
unsigned int var_11 = 1265833417U;
short var_12 = (short)4923;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 18446744073709551601ULL;
    value_mismatch |= var_11 != 19572U;
    value_mismatch |= var_12 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_6, var_7, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
