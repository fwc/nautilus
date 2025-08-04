/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 440
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=440
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned char> var_7, val<int> zero, val<signed char*> var_12, val<unsigned long long int*> var_13) {
    *var_12 -= ((/* implicit */val<signed char>) var_7);
    *var_13 = ((/* implicit */val<unsigned long long int>) (val<short>)16320);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)123;
int zero = 0;
signed char var_12 = (signed char)86;
unsigned long long int var_13 = 14062252028228001756ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)-37;
    value_mismatch |= var_13 != 16320ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
