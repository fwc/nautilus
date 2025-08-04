/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 503
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=503
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
void test(val<unsigned int> var_0, val<unsigned char> var_1, val<bool> var_2, val<signed char> var_4, val<signed char> var_6, val<int> zero, val<int*> var_14, val<int*> var_15, val<int*> var_16, val<signed char*> var_17, val<unsigned char*> var_18) {
    *var_14 = ((/* implicit */val<int>) var_2);
    *var_15 ^= ((/* implicit */val<int>) var_6);
    *var_16 = ((/* implicit */val<int>) var_4);
    *var_17 = ((/* implicit */val<signed char>) var_0);
    *var_18 = var_1;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1977257939U;
unsigned char var_1 = (unsigned char)244;
bool var_2 = (bool)0;
signed char var_4 = (signed char)34;
signed char var_6 = (signed char)-119;
int zero = 0;
int var_14 = -346406298;
int var_15 = 1995839000;
int var_16 = -572732502;
signed char var_17 = (signed char)-22;
unsigned char var_18 = (unsigned char)199;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 0;
    value_mismatch |= var_15 != -1995839087;
    value_mismatch |= var_16 != 34;
    value_mismatch |= var_17 != (signed char)-45;
    value_mismatch |= var_18 != (unsigned char)244;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
