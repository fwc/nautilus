/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6632
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6632
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
void test(val<unsigned int> var_0, val<signed char> var_1, val<bool> var_2, val<unsigned int> var_7, val<unsigned int> var_8, val<int> zero, val<unsigned int*> var_17, val<long long int*> var_18, val<unsigned long long int*> var_19) {
    *var_17 = ((/* implicit */val<unsigned int>) ((val<unsigned short>) ((var_0) != (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)0))))));
    *var_18 -= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) var_2)), (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_1))) / (var_8)))))) ? ((~(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7))))))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) max((6095719081314281558ULL), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)188))))) && ((!(((/* implicit */val<bool>) (val<unsigned char>)68)))))))));
    *var_19 = ((/* implicit */val<unsigned long long int>) min(((val<unsigned short>)28197), (((/* implicit */val<unsigned short>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1140825925U;
signed char var_1 = (signed char)79;
bool var_2 = (bool)1;
unsigned int var_7 = 3378594824U;
unsigned int var_8 = 3079170070U;
int zero = 0;
unsigned int var_17 = 3324802278U;
long long int var_18 = -1347508123502974661LL;
unsigned long long int var_19 = 5327181144512072981ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 1U;
    value_mismatch |= var_18 != -1347508123502974660LL;
    value_mismatch |= var_19 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_7, var_8, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
