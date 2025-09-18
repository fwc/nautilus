/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6568
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6568
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<long long int> var_2, val<unsigned long long int> var_3, val<unsigned short> var_5, val<long long int> var_6, val<unsigned long long int> var_8, val<long long int> var_10, val<unsigned long long int> var_11, val<unsigned short> var_12, val<int> zero, val<unsigned long long int*> var_16, val<unsigned long long int*> var_17, val<unsigned short*> var_18) {
    *var_16 = ((/* implicit */val<unsigned long long int>) ((14311292962625218497ULL) == (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5)))));
    *var_17 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((var_3), (var_11)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))) : (((var_10) % (var_6)))))) || (((((((/* implicit */val<bool>) 18014398241046528LL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12))) : (11257056637340165936ULL))) == (max((((/* implicit */val<unsigned long long int>) var_5)), (16ULL)))))));
    *var_18 = ((/* implicit */val<unsigned short>) max((*var_18), (((/* implicit */val<unsigned short>) max((((/* implicit */val<unsigned long long int>) ((var_11) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((11257056637340165936ULL) == (14668000287986865812ULL)))))))), (((((/* implicit */val<bool>) ((var_11) / (((/* implicit */val<unsigned long long int>) var_2))))) ? (((/* implicit */val<unsigned long long int>) var_10)) : (((((/* implicit */val<bool>) var_5)) ? (var_8) : (var_11))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1486547894576330559LL;
unsigned long long int var_3 = 6495228331258280416ULL;
unsigned short var_5 = (unsigned short)51268;
long long int var_6 = -3602775781368185463LL;
unsigned long long int var_8 = 15300104248516533823ULL;
long long int var_10 = -3564072354441648991LL;
unsigned long long int var_11 = 15411215123025997275ULL;
unsigned short var_12 = (unsigned short)46500;
int zero = 0;
unsigned long long int var_16 = 12015642878761896373ULL;
unsigned long long int var_17 = 17878889050601957382ULL;
unsigned short var_18 = (unsigned short)37731;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0ULL;
    value_mismatch |= var_17 != 1ULL;
    value_mismatch |= var_18 != (unsigned short)56895;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_6, var_8, var_10, var_11, var_12, zero, &var_16, &var_17, &var_18);
  checksum();
}
