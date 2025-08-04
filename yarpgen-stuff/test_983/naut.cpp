/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 983
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=983
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
void test(val<unsigned long long int> var_0, val<unsigned int> var_1, val<long long int> var_11, val<int> zero, val<unsigned int*> var_18, val<int*> var_19, val<unsigned char*> var_20, val<unsigned char*> var_21) {
    *var_18 = ((/* implicit */val<unsigned int>) var_11);
    *var_19 = ((/* implicit */val<int>) max((*var_19), (((/* implicit */val<int>) (val<short>)32763))));
    *var_20 = ((/* implicit */val<unsigned char>) var_0);
    *var_21 = ((/* implicit */val<unsigned char>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3424430961268401310ULL;
unsigned int var_1 = 1203692109U;
long long int var_11 = 7192716890827527168LL;
int zero = 0;
unsigned int var_18 = 2679048579U;
int var_19 = 1904008278;
unsigned char var_20 = (unsigned char)58;
unsigned char var_21 = (unsigned char)26;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1337594880U;
    value_mismatch |= var_19 != 1904008278;
    value_mismatch |= var_20 != (unsigned char)158;
    value_mismatch |= var_21 != (unsigned char)77;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_11, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
