/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 625
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=625
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
void test(val<signed char> var_6, val<bool> var_8, val<int> zero, val<long long int*> var_10, val<unsigned char*> var_11, val<bool*> var_12) {
    *var_10 = ((/* implicit */val<long long int>) max((*var_10), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<unsigned long long int>) var_8))) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) min((-3725080821546696411LL), (((/* implicit */val<long long int>) (val<short>)-20623))))) || (((/* implicit */val<bool>) var_6))))))))));
    *var_11 *= ((/* implicit */val<unsigned char>) ((val<short>) ((((/* implicit */val<bool>) (val<signed char>)53)) ? (((/* implicit */val<unsigned long long int>) -4455213860367279149LL)) : (18446744073709551615ULL))));
    *var_12 -= ((/* implicit */val<bool>) 4101301558U);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-94;
bool var_8 = (bool)1;
int zero = 0;
long long int var_10 = -6078381787295394254LL;
unsigned char var_11 = (unsigned char)245;
bool var_12 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1LL;
    value_mismatch |= var_11 != (unsigned char)239;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
