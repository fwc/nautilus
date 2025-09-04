/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2367
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2367
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
void test(val<signed char> var_3, val<short> var_9, val<unsigned long long int> var_16, val<unsigned long long int> var_18, val<int> zero, val<short*> var_19, val<signed char*> var_20) {
    *var_19 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) ((val<short>) ((var_16) ^ (var_18)))))));
    *var_20 = ((/* implicit */val<signed char>) min((((/* implicit */val<int>) ((((/* implicit */val<int>) var_9)) < (((/* implicit */val<int>) (val<unsigned char>)255))))), ((-(((/* implicit */val<int>) max((((/* implicit */val<short>) var_3)), (var_9))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-6;
short var_9 = (short)23433;
unsigned long long int var_16 = 1086984506032189589ULL;
unsigned long long int var_18 = 12646132561866083361ULL;
int zero = 0;
short var_19 = (short)10760;
signed char var_20 = (signed char)-5;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (short)17227;
    value_mismatch |= var_20 != (signed char)119;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, var_16, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
