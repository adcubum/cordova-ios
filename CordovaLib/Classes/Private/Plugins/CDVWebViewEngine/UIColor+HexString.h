//
//  UIColor+HexString.h
//  AdcubumSimplex
//
//  Created by Alexandros Coutsicos on 13.12.19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor(HexString)

+ (UIColor *) colorWithHexString: (NSString *) hexString;
+ (CGFloat) colorComponentFrom: (NSString *) string start: (NSUInteger) start length: (NSUInteger) length;

@end


NS_ASSUME_NONNULL_END
