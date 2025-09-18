/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8324
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8324
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
void test(val<int> zero, val<int*> var_12, val<unsigned int*> var_13, val<unsigned int*> var_14) {
    *var_12 = ((/* implicit */val<int>) max((((/* implicit */val<unsigned long long int>) (+((~(((/* implicit */val<int>) (val<short>)-13572))))))), (min((621190439821820124ULL), ((-(12612197728741676136ULL)))))));
    *var_13 = ((/* implicit */val<unsigned int>) max((max((((((/* implicit */val<bool>) 17825553633887731501ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-5073))) : (621190439821820124ULL))), (min((2618034799714714209ULL), (621190439821820134ULL))))), (min((min((8195032629044169846ULL), (8195032629044169827ULL))), ((-(621190439821820140ULL)))))));
    *var_14 *= ((/* implicit */val<unsigned int>) max(((+(9698563665643381365ULL))), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((val<unsigned long long int>) 10251711444665381789ULL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_12 = -247568410;
unsigned int var_13 = 1802233060U;
unsigned int var_14 = 3533784014U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -277692196;
    value_mismatch |= var_13 != 4294962223U;
    value_mismatch |= var_14 != 2911328550U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_12, &var_13, &var_14);
  checksum();
}
