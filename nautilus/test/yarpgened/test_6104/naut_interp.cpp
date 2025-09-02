/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6104
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6104
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
void test(val<short> var_0, val<signed char> var_1, val<signed char> var_3, val<unsigned char> var_4, val<unsigned char> var_5, val<int> zero, val<unsigned long long int*> var_10, val<unsigned char*> var_11, val<signed char*> var_12) {
    *var_10 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) var_3))) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) var_1)), (var_5)))))))));
    *var_11 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<short>) ((((/* implicit */val<int>) var_0)) < (((((/* implicit */val<int>) var_5)) + (((/* implicit */val<int>) var_1))))))), (var_0)));
    *var_12 -= ((/* implicit */val<signed char>) max((((val<short>) ((-7285318553344991585LL) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3)))))), (((/* implicit */val<short>) ((9223372036854775807LL) > ((-9223372036854775807LL - 1LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10206;
signed char var_1 = (signed char)-103;
signed char var_3 = (signed char)117;
unsigned char var_4 = (unsigned char)105;
unsigned char var_5 = (unsigned char)162;
int zero = 0;
unsigned long long int var_10 = 8759172846472828129ULL;
unsigned char var_11 = (unsigned char)164;
signed char var_12 = (signed char)109;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 0ULL;
    value_mismatch |= var_11 != (unsigned char)222;
    value_mismatch |= var_12 != (signed char)88;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_5, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
