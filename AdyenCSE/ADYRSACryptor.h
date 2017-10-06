//
// Copyright (c) 2017 Adyen B.V.
//
// This file is open source and available under the MIT license. See the LICENSE file for more info.
//

#import <Foundation/Foundation.h>

@interface ADYRSACryptor : NSObject

+ (NSData *)encrypt:(NSData *)data withKeyInHex:(NSString *)keyInHex;

@end
