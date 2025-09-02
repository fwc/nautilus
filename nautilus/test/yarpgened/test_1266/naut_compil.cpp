/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1266
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1266
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<int> zero, val<unsigned long long int*> var_19, val<unsigned long long int*> var_20, val<signed char*> var_21, val<unsigned long long int*> var_22) {
    *var_19 = ((/* implicit */val<unsigned long long int>) ((1125895611875328LL) + (((/* implicit */val<long long int>) (((!(((/* implicit */val<bool>) 18446744073709551615ULL)))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<short>)15360)) && (((/* implicit */val<bool>) 993568007))))) : (((((/* implicit */val<bool>) 0ULL)) ? (-993568008) : (-993568007))))))));
    *var_20 = ((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) 2829771326U)) ? (((/* implicit */val<unsigned int>) 1311114657)) : (4294967295U))) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))), (((min(((val<bool>)1), ((val<bool>)1))) ? (1090412571832775365LL) : (((/* implicit */val<long long int>) ((val<int>) 8967703396383034024ULL)))))));
    *var_21 = ((/* implicit */val<signed char>) max((*var_21), (((/* implicit */val<signed char>) ((val<unsigned char>) 7872172126885546279ULL)))));
    *var_22 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<int>) ((val<unsigned char>) (val<bool>)1)))) ? (((/* implicit */val<int>) (val<unsigned char>)239)) : (((/* implicit */val<int>) (val<unsigned char>)0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_19 = 15401409918370934022ULL;
unsigned long long int var_20 = 7868099790728405278ULL;
signed char var_21 = (signed char)-11;
unsigned long long int var_22 = 10106189904199787761ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1125894618307321ULL;
    value_mismatch |= var_20 != 1311114658ULL;
    value_mismatch |= var_21 != (signed char)39;
    value_mismatch |= var_22 != 239ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
