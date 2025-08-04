/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 445
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=445
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
void test(val<long long int> var_3, val<int> var_8, val<int> zero, val<unsigned char*> var_16, val<bool*> var_17) {
    *var_16 += ((/* implicit */val<unsigned char>) var_3);
    *var_17 = ((/* implicit */val<bool>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8925942943740277804LL;
int var_8 = 1403909634;
int zero = 0;
unsigned char var_16 = (unsigned char)153;
bool var_17 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)109;
    value_mismatch |= var_17 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_8, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
