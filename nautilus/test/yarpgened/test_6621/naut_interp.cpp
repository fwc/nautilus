/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6621
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6621
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
void test(val<unsigned long long int> var_2, val<unsigned long long int> var_5, val<int> var_8, val<signed char> var_10, val<unsigned char> var_11, val<int> zero, val<short*> var_12, val<bool*> var_13) {
    *var_12 = ((/* implicit */val<short>) var_8);
    *var_13 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<int>) (val<short>)-29034)), (var_8)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((var_5) & (((/* implicit */val<unsigned long long int>) -4863497539855309066LL))))))))) : (((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) == (4366793309030404620LL))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)41190))) : (min((((/* implicit */val<unsigned long long int>) var_10)), (var_2)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14431903986288819485ULL;
unsigned long long int var_5 = 6920599812282852311ULL;
int var_8 = 397698105;
signed char var_10 = (signed char)-18;
unsigned char var_11 = (unsigned char)172;
int zero = 0;
short var_12 = (short)15369;
bool var_13 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)25657;
    value_mismatch |= var_13 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_8, var_10, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
