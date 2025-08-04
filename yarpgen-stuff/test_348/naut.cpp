/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 348
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=348
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
void test(val<long long int> var_2, val<signed char> var_3, val<unsigned int> var_5, val<long long int> var_7, val<bool> var_8, val<signed char> var_11, val<unsigned int> var_12, val<unsigned char> var_13, val<unsigned short> var_15, val<int> zero, val<unsigned int*> var_17, val<unsigned int*> var_18, val<bool*> var_19, val<signed char*> var_20) {
    *var_17 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) min((var_13), (((/* implicit */val<unsigned char>) var_8))))), (var_15))))) < (min((((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_3)) == (((/* implicit */val<int>) var_11))))), (min((((/* implicit */val<long long int>) var_15)), (var_2)))))));
    *var_18 = ((/* implicit */val<unsigned int>) var_13);
    *var_19 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) min((((/* implicit */val<short>) (val<signed char>)31)), ((val<short>)-634)))), (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_15)) : (((/* implicit */val<int>) var_13))))) : (max((((/* implicit */val<unsigned int>) var_15)), (var_12)))))));
    *var_20 = ((/* implicit */val<signed char>) var_13);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7416317803394959416LL;
signed char var_3 = (signed char)-85;
unsigned int var_5 = 851870387U;
long long int var_7 = -2821158492882045571LL;
bool var_8 = (bool)0;
signed char var_11 = (signed char)27;
unsigned int var_12 = 1822718941U;
unsigned char var_13 = (unsigned char)251;
unsigned short var_15 = (unsigned short)15803;
int zero = 0;
unsigned int var_17 = 3050669660U;
unsigned int var_18 = 1726685161U;
bool var_19 = (bool)1;
signed char var_20 = (signed char)-107;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0U;
    value_mismatch |= var_18 != 251U;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (signed char)-5;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_7, var_8, var_11, var_12, var_13, var_15, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
