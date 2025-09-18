/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2378
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2378
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
void test(val<int> var_0, val<signed char> var_1, val<unsigned long long int> var_2, val<int> var_3, val<int> var_4, val<signed char> var_10, val<int> zero, val<int*> var_11, val<unsigned char*> var_12, val<bool*> var_13) {
    *var_11 = ((/* implicit */val<int>) min((((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_10))))), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) var_1)) : (var_4)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)3)) > (1859672767))))) : (((val<long long int>) (val<signed char>)108))))));
    *var_12 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<long long int>) var_4)) % (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)49487)) ? (((/* implicit */val<int>) (val<unsigned char>)254)) : (((/* implicit */val<int>) (val<unsigned short>)65532))))) ? (((/* implicit */val<long long int>) var_3)) : (((((/* implicit */val<bool>) (val<unsigned short>)65532)) ? (4044805220167216825LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))))));
    *var_13 = ((/* implicit */val<bool>) max((var_0), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 1859672767)) ? (var_2) : (((/* implicit */val<unsigned long long int>) 16773120))))) ? (((/* implicit */val<int>) ((val<unsigned short>) -16773119))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 3781703087U)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1509357785;
signed char var_1 = (signed char)44;
unsigned long long int var_2 = 18250291176644751175ULL;
int var_3 = 1242662049;
int var_4 = -1767930525;
signed char var_10 = (signed char)-88;
int zero = 0;
int var_11 = 1297003201;
unsigned char var_12 = (unsigned char)12;
bool var_13 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -88;
    value_mismatch |= var_12 != (unsigned char)4;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
}
