/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 630
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=630
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
void test(val<unsigned int> var_0, val<unsigned char> var_3, val<short> var_4, val<unsigned int> var_11, val<int> zero, val<unsigned short*> var_19, val<long long int*> var_20, val<unsigned short*> var_21) {
    *var_19 = ((/* implicit */val<unsigned short>) min((var_4), (((/* implicit */val<short>) var_3))));
    *var_20 -= ((/* implicit */val<long long int>) var_11);
    *var_21 = ((/* implicit */val<unsigned short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 813412263U;
unsigned char var_3 = (unsigned char)140;
short var_4 = (short)28576;
unsigned int var_11 = 3214470198U;
int zero = 0;
unsigned short var_19 = (unsigned short)52722;
long long int var_20 = -8586674159511235634LL;
unsigned short var_21 = (unsigned short)49936;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)140;
    value_mismatch |= var_20 != -8586674162725705832LL;
    value_mismatch |= var_21 != (unsigned short)44967;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_11, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
