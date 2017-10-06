//
// Copyright (c) 2017 Adyen B.V.
//
// This file is open source and available under the MIT license. See the LICENSE file for more info.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (AdyenUtil)

- (NSString *)encodeFormData DEPRECATED_MSG_ATTRIBUTE("Use -ady_encodeFormData instead.");
- (NSString *)ady_encodeFormData;

@end
