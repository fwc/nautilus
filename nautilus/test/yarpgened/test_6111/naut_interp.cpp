/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6111
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6111
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
void test(val<unsigned short> var_2, val<unsigned char> var_3, val<int> var_7, val<unsigned short> var_9, val<bool> var_10, val<long long int> var_11, val<int> zero, val<unsigned char*> var_12, val<short*> var_13, val<unsigned short*> var_14) {
    *var_12 = ((/* implicit */val<unsigned char>) var_2);
    *var_13 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) min((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) + (-4930773739311243169LL))), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) & (var_11)))))) ? (((var_11) / (((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_2)), (var_7)))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<signed char>) min((((/* implicit */val<unsigned char>) var_10)), (var_3))))))));
    *var_14 = ((/* implicit */val<unsigned short>) -4930773739311243170LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34144;
unsigned char var_3 = (unsigned char)100;
int var_7 = -142577237;
unsigned short var_9 = (unsigned short)5384;
bool var_10 = (bool)0;
long long int var_11 = 6230922511363823428LL;
int zero = 0;
unsigned char var_12 = (unsigned char)129;
short var_13 = (short)13220;
unsigned short var_14 = (unsigned short)53969;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)96;
    value_mismatch |= var_13 != (short)6910;
    value_mismatch |= var_14 != (unsigned short)24670;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
