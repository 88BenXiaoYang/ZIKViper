//
//  ZIKEditorViewRouter
//  ZIKViperDemo
//
//  Created by zuik on 2017/7/16.
//  Copyright © 2017 zuik. All rights reserved.
//

@import ZIKRouter;
#import "ZIKEditorConfigProtocol.h"

NS_ASSUME_NONNULL_BEGIN

DeclareRoutableViewConfigProtocol(ZIKEditorConfigProtocol, ZIKEditorViewRouter)

@interface ZIKEditorViewConfiguration : ZIKViewRouteConfiguration <NSCopying,ZIKEditorConfigProtocol>
@property (nonatomic, assign) BOOL previewing;
@property (nonatomic, weak) id<ZIKEditorDelegate> delegate;
- (void)constructForCreatingNewNote;
- (void)constructForModifyingNote:(ZIKNoteModel *)note;
@end

@interface ZIKEditorViewRouter : ZIKViewRouter <ZIKViewRouterProtocol>

@end

NS_ASSUME_NONNULL_END
