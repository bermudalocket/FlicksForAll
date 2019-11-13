/* Generated by RuntimeBrowser
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCache : NSObject {
    NSMutableSet * _activeRenderers;
    // _UIActionWhenIdle * _idleAction;
    NSSet * _layouts;
    // TIImageCacheClient * _store;
}

// @property (nonatomic, retain) _UIActionWhenIdle *idleAction;

+ (bool)enabled;
+ (UIKeyboardCache *)sharedInstance;

- (void)_didIdle;
- (void)_didIdleAndShouldWait;
- (CGImage *)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3;
- (CGImage *)cachedImageForKey:(id)arg1 fromLayout:(id)arg2;
- (void)clearNonPersistentCache;
- (void)commitTransaction;
- (void)dealloc;
- (void)decrementExpectedRender:(id)arg1;
- (id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3;
- (void)drawCachedImage:(id)arg1 alpha:(double)arg2 inContext:(CGContext *)arg3;
- (id)idleAction;
- (void)incrementExpectedRender:(id)arg1;
- (id)init;
- (void)purge;
- (void)setIdleAction:(id)arg1;
- (id)uniqueLayoutsFromInputModes:(id)arg1;
- (void)updateCacheForInputModes:(id)arg1;

@end