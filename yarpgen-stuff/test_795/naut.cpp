/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 795
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=795
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
void test(val<unsigned char> var_2, val<unsigned short> var_3, val<unsigned short> var_6, val<unsigned short> var_8, val<unsigned char> var_9, val<signed char> var_16, val<signed char> var_17, val<signed char> var_18, val<int> zero, val<unsigned short*> var_19, val<unsigned short*> var_20, val<unsigned short*> var_21, val<unsigned short*> var_22) {
    *var_19 = ((/* implicit */val<unsigned short>) var_2);
    *var_20 = min((var_6), (((/* implicit */val<unsigned short>) ((((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_16)))) != (((/* implicit */val<int>) var_16))))));
    *var_21 = ((/* implicit */val<unsigned short>) min((((((/* implicit */val<int>) ((val<unsigned short>) var_3))) ^ ((+(((/* implicit */val<int>) var_3)))))), (((/* implicit */val<int>) var_18))));
    *var_22 = var_8;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)41;
unsigned short var_3 = (unsigned short)51871;
unsigned short var_6 = (unsigned short)19770;
unsigned short var_8 = (unsigned short)35131;
unsigned char var_9 = (unsigned char)114;
signed char var_16 = (signed char)-109;
signed char var_17 = (signed char)-76;
signed char var_18 = (signed char)31;
int zero = 0;
unsigned short var_19 = (unsigned short)6416;
unsigned short var_20 = (unsigned short)38909;
unsigned short var_21 = (unsigned short)62475;
unsigned short var_22 = (unsigned short)30666;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)41;
    value_mismatch |= var_20 != (unsigned short)1;
    value_mismatch |= var_21 != (unsigned short)0;
    value_mismatch |= var_22 != (unsigned short)35131;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_6, var_8, var_9, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
