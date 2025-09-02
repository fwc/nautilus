/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2451
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2451
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
void test(val<short> var_3, val<unsigned long long int> var_6, val<short> var_7, val<int> zero, val<short*> var_11, val<signed char*> var_12, val<unsigned long long int*> var_13) {
    *var_11 = ((/* implicit */val<short>) var_6);
    *var_12 = ((/* implicit */val<signed char>) min((*var_12), (((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) min((((/* implicit */val<int>) max(((val<short>)18), (((/* implicit */val<short>) (val<signed char>)121))))), ((-(((/* implicit */val<int>) var_7))))))))))));
    *var_13 = ((/* implicit */val<unsigned long long int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)24669;
unsigned long long int var_6 = 6409528729092681046ULL;
short var_7 = (short)-10546;
int zero = 0;
short var_11 = (short)28066;
signed char var_12 = (signed char)106;
unsigned long long int var_13 = 8421075239659318692ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)-4778;
    value_mismatch |= var_12 != (signed char)0;
    value_mismatch |= var_13 != 24669ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_7, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
