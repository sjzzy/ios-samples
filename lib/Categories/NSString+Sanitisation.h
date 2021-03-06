//
//  NSString+Sanitisation.h
//  Katie
//
//  Created by manabu shimada on 28/01/2016.
//  Copyright © 2016 manabu shimada. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Sanitisation)

+ (NSString *)stringByRemovingSpaces:(NSString *)string;
+ (NSString *)stringByRemovingAlphabets:(NSString *)string;
+ (NSString *)stringByAddingCountryCode:(NSString *)string;
+ (NSString *)stringByReplacingPhoneNumber:(NSString *)string;
+ (BOOL)isStringContainingCountryCode:(NSString *)string;
+ (BOOL)isStringContainingMultibyteString:(NSString *)string;

@end
