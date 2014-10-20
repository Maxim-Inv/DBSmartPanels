//
//  NSWindowController+IDEWorkspaceWindowController.h
//  DBSmartPanels
//
//  Created by Dave Blundell on 10/14/14.
//  Copyright (c) 2014 Dave Blundell. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "NSObject+XCRuntimeSupport.h"

@interface NSWindowController (IDEWorkspaceWindowController) <IDEWorkspaceWindowController>

- (BOOL)isDebuggerHidden;
- (void)setDebuggerHidden:(BOOL)hidden;
- (void)setUtilitiesHidden:(BOOL)hidden;
- (void)setEditorMode:(SPIDEEditorMode)editorMode;

@end
