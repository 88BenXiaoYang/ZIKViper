//
//  ZIKLoginServiceInput.h
//  ZIKViperDemo
//
//  Created by zuik on 2017/8/9.
//  Copyright © 2017 zuik. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//If ZIKLoginServiceInput is not registered as routable protocol, remember to remove this macro
#define _ZIKLoginServiceInput_ (Protocol<ZIKRoutableServiceDynamicGetter> *)@protocol(ZIKLoginServiceInput)

@protocol ZIKLoginServiceInput <NSObject>
- (void)loginWithAccount:(NSString *)account
                password:(NSString *)password
                 success:(void(^_Nullable)(void))successHandler
                   error:(void(^_Nullable)(void))errorHandler;
@end

NS_ASSUME_NONNULL_END
