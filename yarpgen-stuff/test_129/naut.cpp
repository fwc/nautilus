/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 129
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=129
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
void test(val<bool> var_1, val<unsigned int> var_2, val<unsigned char> var_4, val<unsigned char> var_5, val<long long int> var_7, val<bool> var_13, val<int> zero, val<long long int*> var_18, val<unsigned short*> var_19, val<unsigned char*> var_20, val<bool*> var_21) {
    *var_18 = ((((/* implicit */val<bool>) ((val<unsigned int>) var_13))) ? (var_7) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13))));
    *var_19 -= ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned int>) 1200522909)), (4294967288U)));
    *var_20 = ((/* implicit */val<unsigned char>) ((max((((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) : (var_7))), (((((/* implicit */val<long long int>) -1373729911)) / (var_7))))) != (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5)))));
    *var_21 = ((/* implicit */val<bool>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned int var_2 = 648103719U;
unsigned char var_4 = (unsigned char)247;
unsigned char var_5 = (unsigned char)255;
long long int var_7 = 3251290817938735012LL;
bool var_13 = (bool)1;
int zero = 0;
long long int var_18 = 4860670563157170562LL;
unsigned short var_19 = (unsigned short)3826;
unsigned char var_20 = (unsigned char)161;
bool var_21 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 3251290817938735012LL;
    value_mismatch |= var_19 != (unsigned short)34901;
    value_mismatch |= var_20 != (unsigned char)1;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_5, var_7, var_13, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
