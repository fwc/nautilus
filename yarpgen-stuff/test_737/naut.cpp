/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 737
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=737
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
void test(val<unsigned long long int> var_0, val<unsigned int> var_2, val<unsigned char> var_4, val<unsigned char> var_5, val<int> zero, val<int*> var_13, val<unsigned long long int*> var_14) {
    *var_13 = ((/* implicit */val<int>) max((*var_13), (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) / (var_2))))));
    *var_14 = ((/* implicit */val<unsigned long long int>) min((max((((/* implicit */val<int>) var_4)), (((((/* implicit */val<bool>) 2354118747U)) ? (((/* implicit */val<int>) (val<short>)0)) : (((/* implicit */val<int>) (val<signed char>)-93)))))), (((/* implicit */val<int>) ((val<unsigned char>) ((var_0) != (((/* implicit */val<unsigned long long int>) 2001086929))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6431835469424649286ULL;
unsigned int var_2 = 629868756U;
unsigned char var_4 = (unsigned char)184;
unsigned char var_5 = (unsigned char)35;
int zero = 0;
int var_13 = -266980496;
unsigned long long int var_14 = 15354765346919714756ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
