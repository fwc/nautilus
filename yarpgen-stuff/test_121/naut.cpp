/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 121
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=121
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
void test(val<unsigned char> var_1, val<unsigned short> var_2, val<unsigned char> var_7, val<int> zero, val<unsigned int*> var_12, val<signed char*> var_13) {
    *var_12 += ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) ((min((-8152087270117387016LL), (((/* implicit */val<long long int>) var_2)))) < (((-9037066905932010566LL) + (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7)))))))) * (((/* implicit */val<int>) var_7))));
    *var_13 = ((/* implicit */val<signed char>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)196;
unsigned short var_2 = (unsigned short)40847;
unsigned char var_7 = (unsigned char)19;
int zero = 0;
unsigned int var_12 = 4126015626U;
signed char var_13 = (signed char)-104;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 4126015626U;
    value_mismatch |= var_13 != (signed char)-60;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
