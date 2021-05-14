
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Fri, 14 May 2021 12:34:10 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
Black,
White,
Test,
Grayscale50,
Grayscale100,
Grayscale200,
Grayscale300,
Grayscale400,
Grayscale500,
Grayscale600,
Grayscale700,
Grayscale800,
Primary100,
Primary200,
Primary300,
Primary400,
Primary600,
Primary500Default,
Success100,
Success200,
Success300,
Success400,
Success500,
Success600,
Warning100,
Warning200,
Warning300,
Warning400,
Warning500,
Warning600,
Error100,
Error200,
Error300,
Error400,
Error500,
Error600,
DropShadowLargeColor,
DropShadowMediumColor,
DropShadowSmallColor
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
