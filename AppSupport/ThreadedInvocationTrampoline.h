/**
 * This header is generated by class-dump-z 0.1-11s.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "InvocationTrampoline.h"

@class NSThread;

@interface ThreadedInvocationTrampoline : InvocationTrampoline {
	NSThread* _thread;
}
-(id)initWithTarget:(id)target thread:(id)thread;
// inherited: -(void)dealloc;
// inherited: -(void)forwardInvocation:(id)invocation;
@end
