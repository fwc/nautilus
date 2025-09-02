/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3333
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3333
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
void test(val<int> var_1, val<signed char> var_2, val<unsigned long long int> var_6, val<signed char> var_7, val<unsigned char> var_9, val<int> var_11, val<int> zero, val<bool*> var_15, val<int*> var_16, val<bool*> var_17, val<long long int*> var_18) {
    *var_15 = ((/* implicit */val<bool>) ((val<unsigned long long int>) max((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_2))))), ((-(18446744073709551603ULL))))));
    *var_16 = ((/* implicit */val<int>) 4294967295U);
    *var_17 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((var_1), (var_11)))) ? (var_1) : (((/* implicit */val<int>) (val<unsigned char>)170))))) ? (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) var_9)), ((-(((/* implicit */val<int>) var_7))))))) : (18446744073709551615ULL)));
    *var_18 = ((/* implicit */val<long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1904803430;
signed char var_2 = (signed char)-47;
unsigned long long int var_6 = 18338598735648767182ULL;
signed char var_7 = (signed char)-121;
unsigned char var_9 = (unsigned char)104;
int var_11 = -1019567814;
int zero = 0;
bool var_15 = (bool)0;
int var_16 = -1161662627;
bool var_17 = (bool)0;
long long int var_18 = -3445572840641220361LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != -1;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != -108145338060784434LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_7, var_9, var_11, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
