
//
// StyleDictionaryColor.m
//
// Do not edit directly
// Generated on Fri, 14 May 2021 15:07:59 GMT
//

#import "StyleDictionaryColor.h"


@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
rgba(0, 0, 0, 1),
rgba(255, 255, 255, 1),
rgba(0, 0, 1, 1),
rgba(247, 247, 252, 1),
rgba(247, 247, 252, 1),
rgba(239, 240, 246, 1),
rgba(217, 219, 233, 1),
rgba(160, 163, 189, 1),
rgba(110, 113, 145, 1),
rgba(78, 75, 102, 1),
rgba(50, 47, 70, 1),
rgba(20, 20, 43, 1),
rgba(229, 248, 255, 1),
rgba(208, 232, 245, 1),
rgba(162, 209, 235, 1),
rgba(69, 163, 216, 1),
rgba(3, 80, 123, 1),
rgba(0, 115, 178, 1),
rgba(237, 246, 244, 1),
rgba(209, 245, 238, 1),
rgba(152, 210, 198, 1),
rgba(114, 190, 174, 1),
rgba(8, 160, 247, 1),
rgba(0, 128, 93, 1),
rgba(251, 243, 226, 1),
rgba(252, 234, 198, 1),
rgba(253, 225, 169, 1),
rgba(229, 194, 121, 1),
rgba(226, 162, 31, 1),
rgba(181, 129, 23, 1),
rgba(251, 239, 239, 1),
rgba(243, 204, 204, 1),
rgba(243, 172, 172, 1),
rgba(229, 128, 128, 1),
rgba(204, 0, 0, 1),
rgba(153, 0, 0, 1),
rgba(0, 0, 0, 0.05),
rgba(0, 0, 0, 0.04),
rgba(0, 0, 0, 0.04)
    ];
  });

  return colorArray;
}

@end
