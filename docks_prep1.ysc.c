#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	bool bLocal_49 = false;
	bool bLocal_50 = false;
	bool bLocal_51 = false;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	struct<2> Local_55[4];
	struct<10> Local_64[8];
	struct<5> Local_145[4];
	vector3 vLocal_166 = { 0f, 0f, 0f };
	struct<2> Local_169[9];
	struct<6> Local_188 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_194 = 0;
	var uLocal_195 = 1092616192;
	var uLocal_196 = 1101004800;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 3;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 16;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	bool bLocal_383 = false;
	bool bLocal_384 = false;
	bool bLocal_385 = false;
	bool bLocal_386 = false;
	bool bLocal_387 = false;
	bool bLocal_388 = false;
	bool bLocal_389 = false;
	bool bLocal_390 = false;
	bool bLocal_391 = false;
	bool bLocal_392 = false;
	bool bLocal_393 = false;
	bool bLocal_394 = false;
	bool bLocal_395 = false;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	bool bLocal_398 = false;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	bool bLocal_404 = false;
	bool bLocal_405 = false;
	bool bLocal_406 = false;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	bool bLocal_409 = false;
	int iLocal_410 = 0;
	vector3 vLocal_411 = { 0f, 0f, 0f };
	bool bLocal_414 = false;
	bool bLocal_415 = false;
	vector3 vLocal_416 = { 0f, 0f, 0f };
	bool bLocal_419 = false;
	bool bLocal_420 = false;
	vector3 vLocal_421 = { 0f, 0f, 0f };
	bool bLocal_424 = false;
	bool bLocal_425 = false;
	vector3 vLocal_426 = { 0f, 0f, 0f };
	bool bLocal_429 = false;
	vector3 vLocal_430 = { 0f, 0f, 0f };
	vector3 vLocal_433 = { 0f, 0f, 0f };
	vector3 vLocal_436 = { 0f, 0f, 0f };
	int iLocal_439 = 0;
	vector3 vLocal_440 = { 0f, 0f, 0f };
	float fLocal_443 = 0f;
	int iLocal_444 = 0;
	bool bLocal_445 = false;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	bool bLocal_453 = false;
	bool bLocal_454 = false;
	bool bLocal_455 = false;
	int iLocal_456 = 0;
	bool bLocal_457 = false;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	var uLocal_460 = 30;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 10;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 10;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 20;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 20;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 30;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 5;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 7;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 5;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 3;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 16;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 10;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 5;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 5;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 8;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 12;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 12;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 12;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 9;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 9;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 12;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 12;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 12;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 9;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 9;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 12;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 12;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 12;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 9;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 9;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 12;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 12;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 12;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 9;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 9;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 12;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 12;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 12;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 9;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 9;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 12;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 12;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 12;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 9;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 9;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 12;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 12;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 12;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 9;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 9;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 12;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 12;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 12;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 9;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 9;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	int iLocal_2102 = 0;
	int iLocal_2103 = 0;
	int iLocal_2104 = 0;
	int iLocal_2105 = 0;
	int iLocal_2106 = 0;
	bool bLocal_2107 = false;
	int iLocal_2108 = 0;
	float fLocal_2109 = 0f;
	int iLocal_2110 = 0;
	bool bLocal_2111 = false;
	bool bLocal_2112 = false;
	int iLocal_2113[2] = { 0, 0 };
	int iLocal_2116 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = UNK_0xAD1355DD1E5D2D9B();
	iLocal_47 = UNK_0x817B3657F78A517A();
	bLocal_49 = "REACTION@MALE_STAND@BIG_VARIATIONS@IDLE_B";
	bLocal_50 = "cellphone@str";
	bLocal_51 = "missheistdocksprep1ig_1";
	vLocal_52 = { -343.3761f, -2633.535f, 5.00103f };
	iLocal_396 = -1;
	vLocal_411 = { 327.263f, -2968.799f, -3f };
	bLocal_414 = 358.5f;
	bLocal_415 = joaat("PROP_DOCK_CRANE_02_LD");
	vLocal_416 = { 305.053f, -2971.395f, 4.99f };
	bLocal_419 = 90f;
	bLocal_420 = joaat("PROP_DOCK_CRANE_02_CAB");
	vLocal_421 = { 0f, 0f, 19.907f };
	bLocal_424 = 0f;
	bLocal_425 = joaat("PROP_DOCK_CRANE_02_HOOK");
	vLocal_426 = { -0.005f, -22.139f, -15f };
	bLocal_429 = 0f;
	vLocal_433 = { -0.005f, -22.139f, 32.825f };
	vLocal_436 = { 0f, 0f, 0.68f };
	vLocal_440 = { Vector(-1.499111f, 1.993344f, -9.107174f) - Vector(-2.452997f, 0.364908f, -9.052903f) };
	fLocal_2109 = 3f;
	if (UNK_0x2EBF608FFE6CA406(3))
	{
		UNK_0xC92DB9682A650680("DHP1_FAIL");
		func_335();
		func_333();
		if (UNK_0x39B7A3CCD2467CAB())
		{
			UNK_0xFCA2A436FD40C153(0, 0, 0, 0);
		}
		func_330();
	}
	UNK_0x7798376279BB5369(1);
	func_325();
	while (true)
	{
		UNK_0x1A6DFFFEEC27BF4F("M_ThePortOfLSHeistPrep1", 0);
		func_324(&uLocal_460);
		func_322(&uLocal_1445);
		func_321();
		func_294();
		if (!bLocal_2107)
		{
			func_278();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	switch (iLocal_2103)
	{
		case 0:
			func_229();
			break;
		case 1:
			func_194();
			break;
		case 2:
			func_8();
			break;
		case 3:
			func_2();
			break;
	}
}

void func_2()
{
	switch (iLocal_2104)
	{
		case 0:
			if (UNK_0x757EF87A33649210())
			{
				UNK_0x82E51BCA72537B6C(800);
			}
			UNK_0x2FB9A57162E54BAB(180f);
			iLocal_2104++;
			break;
		case 1:
			if (UNK_0x0F1CCD77290EE12F())
			{
				func_3();
			}
			break;
	}
}

void func_3()
{
	func_4(0, 0);
	func_330();
}

void func_4(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!Global_61514)
	{
		Global_61514 = iParam1;
	}
	if (bParam0)
	{
		if ((func_7(0) && Global_76868.f_1 == 1) && func_6(Global_76868))
		{
		}
		else
		{
			Global_61512 = 1;
		}
	}
	if (Global_111638.f_9080 || func_7(0))
	{
		iVar0 = func_5();
		iVar1 = Global_89496[iVar0 /*5*/];
		uVar2 = Global_76891.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_111638.f_9080)
			{
			}
			return;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 4);
		UNK_0x5D96D8530B3D0904(&Global_76870, true);
		Global_76886 = uVar2;
		Global_76887 = UNK_0x1C0640BA9A7327B3();
	}
}

int func_5()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_6(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return true;
		case 86:
			return true;
		case 91:
			return true;
		default:
			return false;
	}
	return false;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && UNK_0x8A22C4C08282BF26(joaat("BENCHMARK")) > 0)
	{
		return true;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_76870, false);
}

void func_8()
{
	switch (iLocal_2104)
	{
		case 0:
			if (UNK_0x757EF87A33649210())
			{
				UNK_0x82E51BCA72537B6C(800);
			}
			func_108(2, "STAGE 2: Drop off sub", 1, 0, 0, 1);
			if (func_107(Local_55[0 /*2*/]))
			{
				UNK_0xAA6B3A4292417750(Local_55[0 /*2*/], false, false, false, true, false, false, 0, false);
			}
			UNK_0x6EEAA5C21760E9DB(Local_55[0 /*2*/], 0);
			UNK_0x6EEAA5C21760E9DB(Local_55[1 /*2*/], 0);
			UNK_0x5C2EBB66AD2EA5FF(1);
			UNK_0x728A83630EB6002C(288.0967f, -3133.249f, 0f, 301.0605f, -2969.622f, 11.47017f);
			UNK_0xE3430088DE1D3440(Local_55[0 /*2*/], 0);
			UNK_0x05EC10F460C3A4AF(Local_55[0 /*2*/], 0);
			UNK_0x8B4C4CA774181102(0f, 10f, 4);
			bLocal_453 = false;
			bLocal_454 = false;
			iLocal_2104++;
			break;
		case 1:
			if (func_107(UNK_0x16F2683693E537C9()) && func_107(Local_55[0 /*2*/]))
			{
				if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(Local_55[0 /*2*/], true), 1) > 400f && !UNK_0x0A059E0DB9253280(Local_55[0 /*2*/]))
				{
					func_93(9);
				}
			}
			if (func_92(UNK_0x16F2683693E537C9(), 324.7653f, -2974.495f, -1.5f, 1) > 150f)
			{
				func_91(&(Local_169[7 /*2*/]), 0);
				func_91(&(Local_169[8 /*2*/]), 0);
				func_91(&(Local_169[6 /*2*/]), 0);
				func_89(&uLocal_460, joaat("PROP_DOCK_CRANE_02_LD"));
				func_89(&uLocal_460, joaat("PROP_DOCK_CRANE_02_CAB"));
				func_89(&uLocal_460, joaat("PROP_DOCK_CRANE_02_HOOK"));
			}
			if (!bLocal_453 && func_92(UNK_0x16F2683693E537C9(), vLocal_52, 1) < 200f)
			{
				func_88(&uLocal_460, joaat("BISON"));
				bLocal_454 = true;
				bLocal_453 = true;
			}
			else if (bLocal_453)
			{
				if (func_92(UNK_0x16F2683693E537C9(), vLocal_52, 1) > 220f)
				{
					func_89(&uLocal_460, joaat("BISON"));
					bLocal_454 = false;
					bLocal_453 = false;
					if (UNK_0xC844350D5D58C99A(Local_55[3 /*2*/]))
					{
						UNK_0xA954465BA6FDEFE2(&(Local_55[3 /*2*/]));
					}
				}
				else if (func_92(UNK_0x16F2683693E537C9(), vLocal_52, 1) < 200f)
				{
					if (bLocal_454 && UNK_0xB87F6CF6E5628C67(joaat("BISON")))
					{
						if (!UNK_0xC844350D5D58C99A(Local_55[3 /*2*/]))
						{
							Local_55[3 /*2*/] = UNK_0x122AAB0B1D6F55AD(joaat("BISON"), -317.0741f, -2594.14f, 5.0004f, 316.2352f, true, true, false);
							UNK_0x05EC10F460C3A4AF(Local_55[3 /*2*/], 0);
						}
						bLocal_454 = false;
					}
				}
			}
			if (UNK_0x50B5F6F3C29E9380(Local_55[1 /*2*/], UNK_0x728870EB733D12A1()) || ((UNK_0x3D1053F9EB43B7AD(Local_55[2 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, true, 0) && UNK_0x3D1053F9EB43B7AD(Local_64[3 /*10*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, true, 0)) && UNK_0x3D1053F9EB43B7AD(Local_55[0 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, true, 0)))
			{
				if (func_107(Local_55[1 /*2*/]))
				{
					UNK_0xA7BCA88AFADB9DE5(Local_55[1 /*2*/], 0.5f);
				}
				if (UNK_0xE4EDC4B0E92C078B(Local_188.f_5))
				{
					UNK_0xA6B0C9C2D8FC9744(Local_188.f_5, 1);
				}
				if (UNK_0xE4EDC4B0E92C078B(iLocal_378))
				{
					UNK_0x142CC44DB769B57E(&iLocal_378);
				}
				if (bLocal_390)
				{
					UNK_0x790015DC92C918E2();
					bLocal_390 = false;
				}
				if (func_48(&Local_188, vLocal_52, 0.1f, 0.1f, 2f, 1, Local_64[3 /*10*/], 0, 0, UNK_0x728870EB733D12A1(), "dkp1_tk2", "DKP1_ABFLD", "", "", "", "DKP1_TRUCK", "DKP1_TRUCKBK", 0, 1, 1, -1) || (UNK_0xE4EDC4B0E92C078B(Local_188.f_5) && UNK_0x3D1053F9EB43B7AD(UNK_0x728870EB733D12A1(), -340.1324f, -2630.243f, 5.001461f, -346.5508f, -2636.808f, 12.68896f, 14.9375f, 0, true, 0)))
				{
					UNK_0xB547E3FFEB27073E();
					func_46(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 7f, -1, 1056964608 /* Float: 0.5f */, 0, 1, 0);
					UNK_0x05EC10F460C3A4AF(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0);
					UNK_0x05EC10F460C3A4AF(Local_55[0 /*2*/], 0);
					UNK_0x71EDC33E5A423750(Local_55[0 /*2*/], 10);
					func_42(&Local_188, 1, 0);
					UNK_0x5C2EBB66AD2EA5FF(0);
					UNK_0x728A83630EB6002C(0f, 0f, 0f, 0f, 0f, 0f);
					iLocal_452 = UNK_0x1C0640BA9A7327B3();
					bLocal_392 = false;
					iLocal_2104++;
				}
			}
			else if (!UNK_0x50B5F6F3C29E9380(Local_55[1 /*2*/], UNK_0x728870EB733D12A1()))
			{
				func_41(&Local_188);
				if (!UNK_0xE4EDC4B0E92C078B(iLocal_378))
				{
					iLocal_378 = func_38(Local_55[0 /*2*/], 0, 0);
				}
				if (!bLocal_390 && func_36())
				{
					func_35("DKP1_ATTACH", 7500, 1);
					bLocal_390 = true;
				}
			}
			break;
		case 2:
			if (!UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				if (func_12(&uLocal_213, "DHP1AUD", "DHP1_END", 7, 0, 0, 0))
				{
					UNK_0xFADC0A217229F6B5(Local_64[3 /*10*/], true);
					UNK_0x0C8C0C840C2D1AD2(Local_64[3 /*10*/], UNK_0x16F2683693E537C9(), -1, 2048, 2);
					UNK_0xF82EA857DA10E0CD(&iLocal_379);
					UNK_0xDD353D0E9C789D0E(&iLocal_379);
					UNK_0x75CDA8644CD3B5F5(false, 0, 0);
					UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), -1, 3f, 1f, 1073741824 /* Float: 2f */, 0);
					UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), -1);
					UNK_0x75ABDC5F81978924(iLocal_379);
					UNK_0x78ADC381772E3D54(Local_64[3 /*10*/], iLocal_379);
					UNK_0xF82EA857DA10E0CD(&iLocal_379);
					iLocal_2104++;
				}
			}
			else if ((!bLocal_387 && func_36()) && (UNK_0x1C0640BA9A7327B3() - iLocal_452) > 3000)
			{
				func_35("dkp1_EXIT", 7500, 1);
				UNK_0x8B4C4CA774181102(10f, 5f, 4);
				bLocal_387 = true;
			}
			break;
		case 3:
			if (!func_11())
			{
				if (func_107(Local_55[3 /*2*/]))
				{
					UNK_0xA3BF0AA5A2608191(Local_64[3 /*10*/]);
					UNK_0xF82EA857DA10E0CD(&iLocal_379);
					UNK_0xDD353D0E9C789D0E(&iLocal_379);
					UNK_0x5B1D360B9C6F0A09(false, Local_55[3 /*2*/], -1, -1, 2f, 1, 0);
					UNK_0x132B85BCE016BCA0(false, Local_55[3 /*2*/], -189.8985f, -2622.707f, 5.0001f, 14, 30f, 786468, 5f, 1f, 1);
					UNK_0x89258193691A7600(false, Local_55[3 /*2*/], UNK_0x16F2683693E537C9(), 8, 30f, 786468, 1000f, 10f, 1);
					UNK_0x75ABDC5F81978924(iLocal_379);
					UNK_0x78ADC381772E3D54(Local_64[3 /*10*/], iLocal_379);
					UNK_0xF82EA857DA10E0CD(&iLocal_379);
				}
				else
				{
					UNK_0xA3BF0AA5A2608191(Local_64[3 /*10*/]);
					UNK_0xEEB67C3D0A71A47B(Local_64[3 /*10*/], vLocal_52, 300f, -1, 0, 0);
				}
				iLocal_452 = UNK_0x1C0640BA9A7327B3();
				iLocal_2104++;
			}
			break;
		case 4:
			if (func_10(Local_64[3 /*10*/], UNK_0x16F2683693E537C9(), 1) > 70f || (UNK_0x1C0640BA9A7327B3() - iLocal_452) > 20000)
			{
				func_9(&(Local_64[3 /*10*/]), 1, 0, 1);
				func_3();
			}
			break;
	}
}

void func_9(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(*bParam0))
		{
			UNK_0xE8832A9E16A57A1F(*bParam0, false, 1);
			if (iParam3 == 0)
			{
				UNK_0x8FB4E06C94958F84(*bParam0);
			}
			UNK_0xFADC0A217229F6B5(*bParam0, bParam1);
			if (iParam2 == 1)
			{
				UNK_0x11AD11297DC58CC7(*bParam0, false);
			}
		}
		UNK_0x6DAD7906B73F064D(bParam0);
	}
}

float func_10(bool bParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	if (!UNK_0x437347B10A200C4B(bParam1, 0))
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
	}
	else
	{
		vVar3 = { UNK_0x68F4C0EC296D3901(bParam1, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vVar3, iParam2);
}

bool func_11()
{
	if (Global_20805 != 0 || UNK_0x25037C66EB32B076())
	{
		return true;
	}
	return false;
}

bool func_12(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_34(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_13(sParam2, iParam3, 0);
}

int func_13(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					UNK_0x5CEB4DB888A62073(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_33();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (UNK_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_32(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_31();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			UNK_0x0674E58A79778E99(&Global_7356, 20);
			UNK_0x0674E58A79778E99(&Global_7357, 17);
			UNK_0x0674E58A79778E99(&Global_7358, false);
			if (bParam2)
			{
				func_23();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_22())
				{
					return 0;
				}
				if (UNK_0xCE8BF704469FA7EF(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x6438374572DE9B51(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x989FD1982F631EA3(UNK_0x16F2683693E537C9(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62()))
					{
						return 0;
					}
					if (UNK_0xFB275CE013F3A38C(UNK_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (UNK_0x3114787DB5A129EF(UNK_0xD803B885F5E47A62(), 0))
					{
						return 0;
					}
				}
			}
			if (func_21())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
					case 8:
						return 0;
					case 9:
						break;
					case 10:
						break;
					default:
						break;
				}
				if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 9))
				{
					return 0;
				}
			}
			func_20();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_19();
		func_14();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_33();
	}
	return 0;
}

void func_14()
{
	if (!func_15())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

bool func_15()
{
	if (!Global_262145.f_28086)
	{
		return false;
	}
	if (!Global_76622)
	{
		return false;
	}
	if (UNK_0xD803B885F5E47A62() == func_18())
	{
		return false;
	}
	if (func_16(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_1628237[UNK_0xD803B885F5E47A62() /*615*/].f_1, 7))
	{
		return false;
	}
	if (UNK_0xA14BB9332558B949())
	{
		return false;
	}
	return true;
}

bool func_16(int iParam0)
{
	return func_17(iParam0, 20);
}

bool func_17(int iParam0, bool bParam1)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, bParam1);
}

int func_18()
{
	return -1;
}

void func_19()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	UNK_0x5CEB4DB888A62073(false);
	Global_20805 = 1;
}

void func_20()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	UNK_0x0674E58A79778E99(&Global_7357, 16);
}

bool func_21()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_22()
{
	int iVar0;
	int iVar1;

	if (Global_76622)
	{
		iVar0 = 0;
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &iVar1, 1);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (UNK_0x5ED715849883FAFF() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0x24129324CD7C13D0(UNK_0x16F2683693E537C9(), 78, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_23()
{
	if (func_30(14))
	{
		if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()) == Global_111638.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_24();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

int func_24()
{
	func_25();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_25()
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
	{
		if (func_28(Global_111638.f_2358.f_539.f_4321) != UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			iVar0 = func_27(UNK_0x16F2683693E537C9());
			if (func_26(iVar0) && (!func_30(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_26(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_26(int iParam0)
{
	return iParam0 < 3;
}

int func_27(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		iVar1 = UNK_0x134B62B726CEC8E6(bParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_28(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_28(int iParam0)
{
	if (func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_29(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_30(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_31()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_32(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_1377170.f_1048, bParam0);
}

void func_33()
{
	UNK_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((UNK_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		UNK_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

void func_34(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

void func_35(bool bParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x12F275EDEEF63A2B(iParam1, 1);
}

bool func_36()
{
	if (UNK_0xD17F06053799A7CA())
	{
		return false;
	}
	if (UNK_0x04E6B3EAA8742BFA())
	{
		if (func_11() && !func_37())
		{
			return false;
		}
	}
	return true;
}

bool func_37()
{
	if (Global_21816 == 1)
	{
		return true;
	}
	return false;
}

int func_38(bool bParam0, bool bParam1, bool bParam2)
{
	return func_39(bParam0, !bParam1, bParam2);
}

int func_39(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	iVar0 = UNK_0x5C3B41825F6AC5A0(bParam0);
	if (UNK_0xE2F1E99DD161A861(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_40(UNK_0x8CD06866876216F2(), 1f, 1f));
		if (!bParam2)
		{
			UNK_0x321E019A46034F39(iVar0, bParam1);
		}
		else
		{
			UNK_0x61755AC17D8F538E(iVar0, 2);
		}
	}
	else if (UNK_0xEC560E589DF8370E(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_40(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
		UNK_0x321E019A46034F39(iVar0, bParam1);
	}
	else if (UNK_0x6BC06B42AD71CD8B(bParam0))
	{
		UNK_0x516E63E474722206(iVar0, func_40(UNK_0x8CD06866876216F2(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_40(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_41(bool bParam0)
{
	if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
	{
		UNK_0x142CC44DB769B57E(&(bParam0->f_5));
	}
}

void func_42(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_41(bParam0);
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
		{
			UNK_0x142CC44DB769B57E(&(bParam0->f_1[bVar0]));
		}
		func_45(bVar0, bParam0);
		func_44(bVar0, bParam0);
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 31)
	{
		if (bVar0 != 8)
		{
			UNK_0x0674E58A79778E99(&(bParam0->f_13), bVar0);
			UNK_0x0674E58A79778E99(&(bParam0->f_14), bVar0);
		}
		bVar0++;
	}
	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x142CC44DB769B57E(bParam0);
	}
	bParam0->f_6 = 0;
	bParam0->f_12 = 0;
	bParam0->f_15 = 0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
		{
			UNK_0xA245D14CC59CDD36(bParam0->f_17[bVar0], 1);
			UNK_0x7D732AB707BE9152(bParam0->f_17[bVar0], 1);
			if (bParam2)
			{
				UNK_0x4E885A246A9D983A(bParam0->f_17[bVar0], 32, true);
				UNK_0x4E885A246A9D983A(bParam0->f_17[bVar0], 305, false);
			}
			UNK_0x4E885A246A9D983A(bParam0->f_17[bVar0], 268, false);
			if (bParam1)
			{
				if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_43()) && bParam0->f_17[bVar0] != UNK_0x16F2683693E537C9())
				{
					UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
				}
			}
			if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 29))
			{
				UNK_0xD5EF6A937E06E46F(bParam0->f_17[bVar0], 0, -1, 0);
			}
			bParam0->f_17[bVar0] = 0;
		}
		bVar0++;
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0xA245D14CC59CDD36(UNK_0x16F2683693E537C9(), 1);
		UNK_0x7D732AB707BE9152(UNK_0x16F2683693E537C9(), 1);
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (bParam2)
		{
			UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, true);
		}
	}
	bParam0->f_21 = 0;
}

int func_43()
{
	return UNK_0x5D08BBCCCC2F43A4(UNK_0xA30EC016B12C03E4());
}

void func_44(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 17);
			break;
		case 1:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 18);
			break;
		case 2:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 19);
			break;
	}
}

void func_45(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 14);
			break;
		case 1:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 15);
			break;
		case 2:
			UNK_0x0674E58A79778E99(&(bParam1->f_13), 16);
			break;
	}
}

int func_46(bool bParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	UNK_0x38C3A68D7861DCFD(0, 71, 1);
	UNK_0x38C3A68D7861DCFD(0, 72, 1);
	UNK_0x38C3A68D7861DCFD(0, 76, 1);
	UNK_0x38C3A68D7861DCFD(0, 73, 1);
	UNK_0x38C3A68D7861DCFD(0, 59, 1);
	UNK_0x38C3A68D7861DCFD(0, 60, 1);
	if (bParam5)
	{
		UNK_0x38C3A68D7861DCFD(0, 75, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 80, 1);
	if (!bParam6)
	{
		UNK_0x38C3A68D7861DCFD(0, 69, 1);
		UNK_0x38C3A68D7861DCFD(0, 70, 1);
		UNK_0x38C3A68D7861DCFD(0, 68, 1);
	}
	UNK_0x38C3A68D7861DCFD(0, 74, 1);
	UNK_0x38C3A68D7861DCFD(0, 86, 1);
	UNK_0x38C3A68D7861DCFD(0, 81, 1);
	UNK_0x38C3A68D7861DCFD(0, 82, 1);
	UNK_0x38C3A68D7861DCFD(0, 138, 1);
	UNK_0x38C3A68D7861DCFD(0, 136, 1);
	UNK_0x38C3A68D7861DCFD(0, 114, 1);
	UNK_0x38C3A68D7861DCFD(0, 107, 1);
	UNK_0x38C3A68D7861DCFD(0, 110, 1);
	UNK_0x38C3A68D7861DCFD(0, 89, 1);
	UNK_0x38C3A68D7861DCFD(0, 89, 1);
	UNK_0x38C3A68D7861DCFD(0, 87, 1);
	UNK_0x38C3A68D7861DCFD(0, 88, 1);
	UNK_0x38C3A68D7861DCFD(0, 113, 1);
	UNK_0x38C3A68D7861DCFD(0, 115, 1);
	UNK_0x38C3A68D7861DCFD(0, 116, 1);
	UNK_0x38C3A68D7861DCFD(0, 117, 1);
	UNK_0x38C3A68D7861DCFD(0, 118, 1);
	UNK_0x38C3A68D7861DCFD(0, 119, 1);
	UNK_0x38C3A68D7861DCFD(0, 352, 1);
	UNK_0x38C3A68D7861DCFD(0, 131, 1);
	UNK_0x38C3A68D7861DCFD(0, 132, 1);
	UNK_0x38C3A68D7861DCFD(0, 123, 1);
	UNK_0x38C3A68D7861DCFD(0, 126, 1);
	UNK_0x38C3A68D7861DCFD(0, 129, 1);
	UNK_0x38C3A68D7861DCFD(0, 130, 1);
	UNK_0x38C3A68D7861DCFD(0, 133, 1);
	UNK_0x38C3A68D7861DCFD(0, 134, 1);
	UNK_0xCFAE3195DD6AE715();
	func_47(bParam0);
	if ((UNK_0x1C0640BA9A7327B3() - Global_29) > 500)
	{
		UNK_0xE0C0351D5B931E37(bParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = UNK_0x1C0640BA9A7327B3();
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x755FF954DAE327E1(UNK_0x9C66D99E63E8E24C(bParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_47(bool bParam0)
{
	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0x2668265160B1C0E5(bParam0))
		{
			if (UNK_0x08D499BC1F863857(bParam0))
			{
				UNK_0xF356D74F6AE75D16(bParam0, 0);
			}
		}
	}
}

int func_48(bool bParam0, vector3 vParam1, vector3 vParam4, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, bool bParam20, bool bParam21, bool bParam22)
{
	return func_49(bParam0, vParam1, vParam4, func_87(), func_87(), iParam7, 5, iParam8, iParam9, iParam10, sParam11, sParam12, bParam13, bParam14, bParam15, bParam16, iParam17, iParam19, bParam20, bParam18, 0, 0, bParam21, bParam22, 0, 0, 0, 1, 1065353216 /* Float: 1f */);
}

int func_49(bool bParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, vector3 vParam10, bool bParam13, bool bParam14, bool bParam15, int iParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28, bool bParam29, bool bParam30, bool bParam31, int iParam32, int iParam33, int iParam34, bool bParam35, bool bParam36)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	bParam0->f_17[0] = bParam15;
	bParam0->f_17[1] = iParam16;
	bParam0->f_17[2] = iParam17;
	bParam0->f_16 = bParam15;
	func_86(bParam0);
	func_85(bParam0);
	func_84();
	if (func_68(bParam0, bParam0->f_17[0], bParam0->f_17[1], bParam0->f_17[2], bParam20, bParam21, bParam22, bParam23, bParam0->f_8, bParam25, bParam18, 0, 0, iParam32, iParam33, iParam34, bParam14, bParam26))
	{
		func_67(bParam20);
		func_67(bParam21);
		func_67(bParam22);
		func_67(bParam23);
		if (UNK_0x0F1CCD77290EE12F())
		{
			bVar1 = false;
			if (UNK_0xDF1306B443CD3D15(bParam18, 0))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam18, 0))
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
					{
						UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
					}
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 23))
					{
						UNK_0x0674E58A79778E99(&(bParam0->f_13), 23);
					}
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (bParam14 == 4 || bParam14 == 5)
			{
				if (func_65(bParam0, bParam29))
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
					if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
					{
						UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
					}
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_67(bParam24);
				func_67(bParam27);
				func_67("MORE_SEATS");
				if (bParam26 && UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
				{
					if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
					{
						UNK_0x142CC44DB769B57E(&(bParam0->f_5));
						func_67(bParam19);
					}
					if (UNK_0xE4EDC4B0E92C078B(*bParam0))
					{
						UNK_0x142CC44DB769B57E(bParam0);
					}
					if ((!func_63(bParam0, 1) && !func_62(bParam0)) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
					{
						if (bParam30)
						{
							func_61(bParam0, "LOSE_WANTED", 0);
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
							{
								func_59(bParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), false);
						UNK_0x0674E58A79778E99(&(bParam0->f_13), true);
					}
				}
				else
				{
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
					{
						func_67("LOSE_WANTED");
						UNK_0x0674E58A79778E99(&(bParam0->f_13), false);
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), true);
					}
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, true))
					{
						if (!func_63(bParam0, 1))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
							{
								func_59(bParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							UNK_0x0674E58A79778E99(&(bParam0->f_13), true);
						}
					}
					if (!UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
					{
						if (UNK_0xE4EDC4B0E92C078B(*bParam0))
						{
							UNK_0x142CC44DB769B57E(bParam0);
						}
						bParam0->f_5 = func_58(vVar3, 0);
						if (!bParam31 == -1)
						{
							UNK_0xBC8E0A7390523199(bParam0->f_5, bParam31);
						}
						if (bParam35)
						{
							func_57(bParam0->f_5, bParam0);
						}
					}
					else if (!func_56(vVar3, UNK_0xAC14F6E4B17D7835(bParam0->f_5), 0.1f, 0))
					{
						UNK_0x2F9282246F89FFD1(bParam0->f_5, vVar3);
						if (bParam35)
						{
							func_57(bParam0->f_5, bParam0);
						}
					}
					if (!func_63(bParam0, 2))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 2))
						{
							func_61(bParam0, bParam19, 0);
							UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 2);
						}
					}
					if (bParam14 == 4 || bParam14 == 5)
					{
						if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 13))
						{
							bParam13 = false;
						}
					}
					bVar1 = false;
					bVar6 = false;
					iVar7 = 0;
					if ((bParam14 == 1 || bParam14 == 3) || bParam14 == 5)
					{
						bVar6 = true;
					}
					if (bParam14 == 2 || bParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (bParam14 == 4 || bParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vParam1, vParam4, bParam13, bVar6, iVar7);
						if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), vParam7, vParam10, bParam36, 0, bVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (UNK_0x5A91F08DF773C39D(UNK_0x16F2683693E537C9(), vParam1, vParam4, bParam13, bVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar2]))
							{
								if (bParam14 == 4 || bParam14 == 5)
								{
									bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
									if (!UNK_0xC42A92762C58E1B9(bParam0->f_17[iVar2], bVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (bParam18 != 0)
								{
									if (!UNK_0xC42A92762C58E1B9(bParam0->f_17[iVar2], bParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[iVar2], func_43()) || !func_54(bParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_51(bParam0))
							{
								func_67(bParam19);
								func_67(bParam24);
								func_67(bParam20);
								func_67(bParam21);
								func_67(bParam22);
								func_67(bParam23);
								func_67("LOSE_WANTED");
								func_67("MORE_SEATS");
								func_67(bParam27);
								func_42(bParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (UNK_0xC844350D5D58C99A(bParam18))
			{
				if ((bParam26 && UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) && (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 22)))
				{
					func_67(bParam24);
					func_67(bParam27);
					if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5) || UNK_0xE4EDC4B0E92C078B(*bParam0))
					{
						UNK_0x142CC44DB769B57E(&(bParam0->f_5));
						UNK_0x142CC44DB769B57E(bParam0);
						func_67(bParam19);
					}
					if ((!func_63(bParam0, 1) && !func_62(bParam0)) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
					{
						if (bParam30)
						{
							func_61(bParam0, "LOSE_WANTED", 0);
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
							{
								func_59(bParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), false);
						UNK_0x0674E58A79778E99(&(bParam0->f_13), true);
					}
				}
				else
				{
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
					{
						func_67("LOSE_WANTED");
						UNK_0x0674E58A79778E99(&(bParam0->f_13), false);
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), true);
					}
					if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, true))
					{
						if (!func_63(bParam0, 1))
						{
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
							{
								func_59(bParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							UNK_0x0674E58A79778E99(&(bParam0->f_13), true);
						}
					}
					if (UNK_0xDF1306B443CD3D15(bParam18, 0))
					{
						if (!UNK_0xE4EDC4B0E92C078B(*bParam0))
						{
							if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
							{
								UNK_0x142CC44DB769B57E(&(bParam0->f_5));
								func_67(bParam19);
							}
							*bParam0 = func_50(bParam18, 0, 0);
							UNK_0x9D7CDDB4B55142AF(*bParam0, 2);
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
							{
								func_57(*bParam0, bParam0);
							}
						}
						if (!func_63(bParam0, 2))
						{
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 3))
							{
								func_61(bParam0, bParam24, 0);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
								UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
							}
							else if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
							{
								if (!UNK_0x2EBF5002C6B6A06C(bParam27))
								{
									if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
									{
										func_61(bParam0, bParam27, 0);
										UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
									}
								}
								else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
								{
									func_61(bParam0, bParam24, 0);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
								}
								if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 23))
								{
									if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]))
									{
										func_59(bParam0->f_17[0], "GET_IN_CAR", 3);
									}
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
				{
					UNK_0x142CC44DB769B57E(&(bParam0->f_5));
					func_67(bParam19);
				}
				if (bParam14 == 4 || bParam14 == 5)
				{
					if (bParam29 > 0)
					{
						if (!func_63(bParam0, 2))
						{
							if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 13))
								{
									bVar8 = false;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar2]))
										{
											bVar8++;
										}
										iVar2++;
									}
									iVar9 = UNK_0x09AC81E49EA267F7(false, bVar8);
									if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar9]))
									{
										func_59(bParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_61(bParam0, "MORE_SEATS", 0);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 13);
								}
							}
							else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 3))
							{
								func_61(bParam0, bParam24, 0);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
								UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
							}
							else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
							{
								if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
								{
									func_61(bParam0, bParam27, 0);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_63(bParam0, 2))
					{
						if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 3))
						{
							func_61(bParam0, bParam24, 0);
							UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 3);
							UNK_0x0674E58A79778E99(&(bParam0->f_13), 4);
						}
						else if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 9))
						{
							if (!UNK_0x2EBF5002C6B6A06C(bParam27))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
								{
									func_61(bParam0, bParam27, 0);
									UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
								}
							}
							else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 4))
							{
								func_61(bParam0, bParam24, 0);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, false))
		{
			UNK_0x0674E58A79778E99(&(bParam0->f_13), false);
		}
		func_67(bParam19);
		func_67(bParam24);
		func_67(bParam27);
		func_67(bParam24);
		func_67("LOSE_WANTED");
		if (UNK_0xE4EDC4B0E92C078B(bParam0->f_5))
		{
			UNK_0x142CC44DB769B57E(&(bParam0->f_5));
		}
		if (UNK_0xE4EDC4B0E92C078B(*bParam0))
		{
			UNK_0x142CC44DB769B57E(bParam0);
		}
	}
	UNK_0x0674E58A79778E99(&(bParam0->f_13), 11);
	UNK_0x0674E58A79778E99(&(bParam0->f_13), 12);
	return 0;
}

int func_50(bool bParam0, bool bParam1, bool bParam2)
{
	return func_39(bParam0, !bParam1, bParam2);
}

bool func_51(bool bParam0)
{
	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 12))
	{
		if (func_53(UNK_0x16F2683693E537C9()))
		{
			if (func_52(1, 0, 1) || UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 7))
			{
				return true;
			}
		}
	}
	else if (func_52(1, 0, 1) || UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 7))
	{
		return true;
	}
	return false;
}

bool func_52(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (UNK_0xC8BC75555A67090D())
	{
		return false;
	}
	if (bParam0)
	{
		if (UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0))
		{
			return false;
		}
	}
	bVar0 = false;
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
		{
			return false;
		}
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (bParam0)
		{
			if (UNK_0x437347B10A200C4B(bVar0, 0))
			{
				return false;
			}
		}
		if (bParam2)
		{
			if (!UNK_0x437347B10A200C4B(bVar0, 0))
			{
				if (UNK_0xA30B8362589C124A(bVar0, -1, 0) != UNK_0x16F2683693E537C9())
				{
					return false;
				}
			}
		}
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0x30C0A7C378403357(bVar0) < 0.95f || UNK_0x30C0A7C378403357(bVar0) > 1.011f)
			{
				return false;
			}
		}
	}
	else if (bParam1)
	{
		return false;
	}
	if (!UNK_0x093B8869A122CF27(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	if (!UNK_0xD79EDC28CA84B527(UNK_0xD803B885F5E47A62()))
	{
		return false;
	}
	return true;
}

bool func_53(bool bParam0)
{
	float fVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		fVar0 = UNK_0x9C66D99E63E8E24C(bParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_54(bool bParam0, bool bParam1)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()) && bParam1)
		{
			if (func_55(UNK_0x16F2683693E537C9(), bParam0))
			{
				UNK_0x7C27693C5112825F(func_43(), 50f);
				return true;
			}
		}
		else if (UNK_0xBFDE4EE64C4BF2D6(bParam0, func_43()))
		{
			UNK_0x7C27693C5112825F(func_43(), 50f);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_55(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0x0E0E6175453415CB(bParam0))
		{
			bVar0 = UNK_0x6937EA2286828455(bParam0, 0);
			if (UNK_0xDF1306B443CD3D15(bVar0, 0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam1))
				{
					if (UNK_0x82CCEAB29E9451DD(bParam1, bVar0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_56(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (UNK_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (UNK_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (UNK_0x755FF954DAE327E1((vParam0.z - vParam3.z)) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (UNK_0x755FF954DAE327E1((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (UNK_0x755FF954DAE327E1((vParam0.y - vParam3.y)) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

void func_57(int iParam0, bool bParam1)
{
	if (UNK_0xE4EDC4B0E92C078B(iParam0))
	{
		if (UNK_0xE4EDC4B0E92C078B(bParam1->f_6))
		{
			UNK_0x661342B9651D16E2(bParam1->f_6, false);
		}
		UNK_0xB8C3D2D6C4AAEF18(0);
		UNK_0x053C926E5E341906();
		bParam1->f_6 = iParam0;
		UNK_0x661342B9651D16E2(iParam0, true);
	}
}

int func_58(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = UNK_0x6CC513A908911CF0(vParam0);
	UNK_0x516E63E474722206(iVar0, func_40(UNK_0x8CD06866876216F2(), 1f, 1f));
	UNK_0x661342B9651D16E2(iVar0, bParam3);
	return iVar0;
}

void func_59(bool bParam0, bool bParam1, int iParam2)
{
	UNK_0xC8B576D6F470FFC6(bParam0, bParam1, func_60(iParam2), 1);
}

int func_60(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		case 2:
			return "SPEECH_PARAMS_BEAT";
		case 3:
			return "SPEECH_PARAMS_FORCE";
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		case 14:
			return "SPEECH_PARAMS_HELI";
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		default:
			break;
	}
	iVar0 = 0;
	return iVar0;
}

void func_61(bool bParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!UNK_0x2EBF5002C6B6A06C(bParam1))
		{
			if (!UNK_0x7F8A39872A07D2CE(bParam1, ""))
			{
				func_35(bParam1, 7500, 1);
			}
		}
	}
	bParam0->f_10 = UNK_0x1C0640BA9A7327B3();
}

bool func_62(bool bParam0)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_16))
	{
		if (UNK_0x65636D4556D82155(bParam0->f_16))
		{
			return true;
		}
	}
	return false;
}

bool func_63(bool bParam0, int iParam1)
{
	if (iParam1 != 1 || UNK_0x04E6B3EAA8742BFA())
	{
		if (UNK_0xD17F06053799A7CA())
		{
			return true;
		}
		if (func_64(bParam0))
		{
			return true;
		}
	}
	if (iParam1 != 2 || UNK_0x04E6B3EAA8742BFA())
	{
		if (func_11() && !func_37())
		{
			return true;
		}
	}
	return false;
}

bool func_64(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x1C0640BA9A7327B3();
	iVar0 = (iVar1 - bParam0->f_10);
	if (iVar0 < 35)
	{
		return true;
	}
	return false;
}

bool func_65(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (func_66(bVar0, bParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_66(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (UNK_0xC844350D5D58C99A(bParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = UNK_0xD6DF381716822EFE(bParam0);
		if (bParam2 > 0)
		{
			if (iVar1 >= bParam2)
			{
				if (bParam2 > 1)
				{
					if (!UNK_0x4A43A287EB2A2B60(bParam0, 1))
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!UNK_0x4A43A287EB2A2B60(bParam0, 1))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

void func_67(bool bParam0)
{
	if (!UNK_0x2EBF5002C6B6A06C(bParam0))
	{
		UNK_0x2F23E8033F1ADDD9(bParam0);
	}
}

bool func_68(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	bool bVar15[3];
	int iVar19[3];
	bool bVar23;
	bool bVar24;
	int iVar25;
	bool bVar26;
	int iVar27;
	vector3 vVar28;
	bool bVar31;
	bool bVar32;

	iVar4 = 0;
	bParam0->f_17[0] = uParam1;
	bParam0->f_17[1] = uParam2;
	bParam0->f_17[2] = uParam3;
	bParam0->f_16 = uParam1;
	bVar15[0] = bParam4;
	bVar15[1] = bParam5;
	bVar15[2] = bParam6;
	iVar19[0] = iParam13;
	iVar19[1] = iParam14;
	iVar19[2] = iParam15;
	bVar6 = true;
	bVar1 = false;
	iVar2 = 0;
	bVar3 = false;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
		{
			bVar3++;
		}
		if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
		{
			if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 29) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 28))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
				{
					UNK_0xD5EF6A937E06E46F(bParam0->f_17[bVar0], 1, -1, 0);
				}
				if (bVar0 == 2)
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 28);
				}
			}
		}
		else if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 29) && UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 28))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
			{
				UNK_0xD5EF6A937E06E46F(bParam0->f_17[bVar0], 0, -1, 0);
			}
			if (bVar0 == 2)
			{
				UNK_0x0674E58A79778E99(&(bParam0->f_13), 28);
			}
		}
		bVar0++;
	}
	if (bVar3 == 0)
	{
		return true;
	}
	if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 26))
	{
		bVar23 = false;
		if (!UNK_0xC844350D5D58C99A(bParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			bVar24 = UNK_0x83C1D4B63BBD91F6(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 50f, false, iVar25);
			if (UNK_0xDF1306B443CD3D15(bVar24, 0))
			{
				bParam0->f_21 = bVar24;
			}
		}
		if (UNK_0xDF1306B443CD3D15(bParam0->f_21, 0))
		{
			if (SYSTEM::VDIST2(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(bParam0->f_21, true)) < 400f)
			{
				if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
				{
					if (!UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0) || !bParam17)
					{
						if (func_66(bParam0->f_21, bParam0, bVar3))
						{
							bVar0 = false;
							while (bVar0 < 3)
							{
								if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
								{
									UNK_0xCAF7AE54F764D5AA(bParam0->f_17[bVar0], 1f);
									if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_43()))
									{
										UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
									}
									if (UNK_0xD1960163A3042274(bParam0->f_17[bVar0], -1794415470) == 7 && !func_83(bParam0->f_17[bVar0], bParam0->f_21))
									{
										if (!UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0]) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0]))
										{
											UNK_0x11AD11297DC58CC7(bParam0->f_17[bVar0], true);
											UNK_0x5B1D360B9C6F0A09(bParam0->f_17[bVar0], bParam0->f_21, 60000, bVar0, 1f, 1, 0);
											UNK_0xBF541ED34EA81209(bParam0->f_17[bVar0], bVar0);
										}
									}
								}
								bVar0++;
							}
							return true;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			UNK_0x0674E58A79778E99(&(bParam0->f_13), 26);
			bVar0 = false;
			while (bVar0 < 3)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
				{
					if (!UNK_0x81A5359F25512A04(bParam0->f_17[bVar0]) && !bParam0->f_15)
					{
						UNK_0xA3BF0AA5A2608191(bParam0->f_17[bVar0]);
					}
					if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_43()))
					{
						if (func_81(bParam0, bParam0->f_17[bVar0], fParam8, 1))
						{
							UNK_0xE25C96A9C36BE5D2(bParam0->f_17[bVar0], func_43());
						}
					}
				}
				bVar0++;
			}
		}
	}
	if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 26))
	{
		if ((!func_80(bParam0) && UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9())) && !UNK_0xC844350D5D58C99A(bParam10))
		{
			bVar13 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
			if (UNK_0xDF1306B443CD3D15(bVar13, 0))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 13))
				{
					if (bParam16 == 4 || bParam16 == 5)
					{
					}
					if (!func_63(bParam0, 2))
					{
						bVar26 = false;
						iVar27 = 0;
						bVar0 = false;
						while (bVar0 < 3)
						{
							if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
							{
								bVar26++;
							}
							bVar0++;
						}
						iVar27 = UNK_0x09AC81E49EA267F7(false, bVar26);
						if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar27]))
						{
							func_59(bParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_61(bParam0, "MORE_SEATS", 0);
						UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			UNK_0x0674E58A79778E99(&(bParam0->f_13), 13);
			func_67("MORE_SEATS");
		}
		if (!UNK_0xC844350D5D58C99A(bParam10))
		{
			if ((!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[0]) || !UNK_0xEB6A8945D1AC98A1(bParam0->f_17[1])) || !UNK_0xEB6A8945D1AC98A1(bParam0->f_17[2]))
			{
				if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 31))
				{
					if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()) && !func_63(bParam0, 2))
					{
						bVar13 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
						if (func_79(bVar13, bParam0))
						{
							func_61(bParam0, "CMN_VEHSUIT", 0);
							UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 31);
						}
					}
				}
				else if (!UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
				{
					UNK_0x0674E58A79778E99(&(bParam0->f_13), 31);
					func_67("CMN_VEHSUIT");
				}
			}
		}
		if (UNK_0xDF1306B443CD3D15(bParam10, 0))
		{
			if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bParam10))
			{
				if (UNK_0xBFC0798A6E3417F9(0, 75))
				{
					UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 21);
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 21))
			{
				UNK_0x0674E58A79778E99(&(bParam0->f_13), 21);
			}
		}
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (UNK_0xC844350D5D58C99A(bParam0->f_17[bVar0]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
				{
					if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_43()))
					{
						UNK_0xFCCF7611216AE801(bParam0->f_17[bVar0], 1);
					}
					else
					{
						UNK_0xFCCF7611216AE801(bParam0->f_17[bVar0], 0);
					}
					if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
					{
						bVar13 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
						if (UNK_0xDF1306B443CD3D15(bVar13, 0))
						{
							if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_43()))
							{
								if (!func_80(bParam0) && UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
								{
									if (!func_78(bParam0->f_17[bVar0]))
									{
										UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
									}
								}
							}
						}
						if (bVar13 != bParam10 && !UNK_0x437347B10A200C4B(bVar13, 0))
						{
							if (UNK_0x82CCEAB29E9451DD(bParam0->f_17[bVar0], bVar13))
							{
								if (UNK_0x70EED0761B82965E(bVar13) && !UNK_0xF79A7BCA9E38BBBC(bVar13))
								{
									vVar28 = { UNK_0x68F4C0EC296D3901(bVar13, true) };
									if (vVar28.z < -1f)
									{
										UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_43()))
					{
						if (UNK_0x0E0E6175453415CB(bParam0->f_17[bVar0]))
						{
							bVar13 = UNK_0x6937EA2286828455(bParam0->f_17[bVar0], 0);
							if (!UNK_0x437347B10A200C4B(bVar13, 0))
							{
								if (UNK_0xDF1306B443CD3D15(bParam10, 0))
								{
									if (bVar13 != bParam10)
									{
										if (!UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bVar13))
										{
											if (UNK_0x9C66D99E63E8E24C(bVar13) > 5f)
											{
												UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 4160);
											}
											else
											{
												UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
									{
										bVar31 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
									}
									if (UNK_0xDF1306B443CD3D15(bVar31, 0))
									{
										if (bVar13 != bVar31)
										{
											if (UNK_0x9C66D99E63E8E24C(bVar13) > 5f)
											{
												UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 4160);
											}
											else
											{
												UNK_0x45F014B3D0466974(bParam0->f_17[bVar0], bVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_43()))
					{
						bVar32 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
						if (UNK_0xC844350D5D58C99A(bVar32))
						{
							if (func_66(bVar32, bParam0, 0))
							{
								if (func_77(bVar0, bParam0) || !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 27))
								{
									UNK_0xBF541ED34EA81209(bParam0->f_17[bVar0], bVar0);
									func_44(bVar0, bParam0);
									iVar4++;
									if (iVar4 >= bVar3)
									{
										UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 27);
									}
								}
							}
							else if (!func_77(bVar0, bParam0))
							{
								if (UNK_0x134B62B726CEC8E6(bVar32) == joaat("SENTINEL2"))
								{
									UNK_0xBF541ED34EA81209(bParam0->f_17[bVar0], 4);
								}
								else
								{
									UNK_0xBF541ED34EA81209(bParam0->f_17[bVar0], 2);
								}
								func_76(bVar0, bParam0);
							}
						}
					}
					if ((!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_43()) && !func_75(bParam0->f_17[bVar0], bParam10)) && !func_74(bParam0->f_17[bVar0], bParam10))
					{
						if (func_81(bParam0, bParam0->f_17[bVar0], fParam8, bParam11))
						{
							if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_43()))
							{
								if (((!UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0]) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0])) && !UNK_0x7F69A7C512ACACFD(bParam0->f_17[bVar0])) && !UNK_0x81A5359F25512A04(bParam0->f_17[bVar0]))
								{
									iVar14 = UNK_0xD1960163A3042274(bParam0->f_17[bVar0], -1794415470);
									if (iVar14 == 7)
									{
										UNK_0xA3BF0AA5A2608191(bParam0->f_17[bVar0]);
									}
									UNK_0xE25C96A9C36BE5D2(bParam0->f_17[bVar0], func_43());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
							{
								bParam0->f_11 = UNK_0x1C0640BA9A7327B3();
								bParam0->f_1[bVar0] = func_50(bParam0->f_17[bVar0], 0, 0);
								UNK_0x9D7CDDB4B55142AF(bParam0->f_1[bVar0], 2);
								if (bParam9)
								{
									func_57(bParam0->f_1[bVar0], bParam0);
								}
							}
						}
						bVar6 = false;
					}
					else if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
					{
						if (((func_54(bParam0->f_17[bVar0], 1) || func_75(bParam0->f_17[bVar0], bParam10)) || bParam12) || (UNK_0xDF1306B443CD3D15(bParam10, 0) && !UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam10, 0)))
						{
							if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
							{
								UNK_0x142CC44DB769B57E(&(bParam0->f_1[bVar0]));
								func_67(bVar15[bVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_57(bParam0->f_1[bVar0], bParam0);
							}
							bVar6 = false;
						}
					}
					else if (UNK_0xDF1306B443CD3D15(bParam10, 0))
					{
						if (!UNK_0x82CCEAB29E9451DD(bParam0->f_17[bVar0], bParam10))
						{
							if ((UNK_0x12DE711B1C681E9E(bParam0->f_17[bVar0], bParam10, 20f, 20f, 5f, 0, 1, 0) && !UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 11)) && !((bParam17 && UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0)) && !UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam10, 0)))
							{
								if (UNK_0x0E0E6175453415CB(bParam0->f_17[bVar0]))
								{
									if (!UNK_0xC42A92762C58E1B9(bParam0->f_17[bVar0], bParam10, 0))
									{
										if (!func_54(bParam0->f_17[bVar0], 1))
										{
											if (func_53(bParam0->f_17[bVar0]))
											{
												iVar14 = UNK_0xD1960163A3042274(bParam0->f_17[bVar0], joaat("SCRIPT_TASK_LEAVE_VEHICLE"));
												if (iVar14 == 7)
												{
													UNK_0x75CDA8644CD3B5F5(bParam0->f_17[bVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_43()))
									{
										if ((((!UNK_0x7F69A7C512ACACFD(bParam0->f_17[bVar0]) && !UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0])) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0])) && !UNK_0x81A5359F25512A04(bParam0->f_17[bVar0])) && !UNK_0x4E861BC5B1EDA7BD(bParam10))
										{
											UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
										}
									}
									iVar14 = UNK_0xD1960163A3042274(bParam0->f_17[bVar0], -1794415470);
									if (iVar14 == 7 && !func_83(bParam0->f_17[bVar0], bParam10))
									{
										if (((((!UNK_0x7F69A7C512ACACFD(bParam0->f_17[bVar0]) && !UNK_0x7F69A7C512ACACFD(UNK_0x16F2683693E537C9())) && !func_73(bParam0->f_17[bVar0], 2f)) && !UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0])) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0])) && !UNK_0x4E861BC5B1EDA7BD(bParam10))
										{
											UNK_0x11AD11297DC58CC7(bParam0->f_17[bVar0], true);
											if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 10))
											{
												UNK_0xCAF7AE54F764D5AA(bParam0->f_17[bVar0], 1f);
											}
											UNK_0x5B1D360B9C6F0A09(bParam0->f_17[bVar0], bParam10, 60000, bVar0, 2f, 1, 0);
											UNK_0x579B0182884711E5(bParam0->f_17[bVar0], 0);
										}
									}
									else if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam10, 0))
									{
										bParam0->f_1[bVar0] = func_50(bParam0->f_17[bVar0], 0, 0);
										UNK_0x9D7CDDB4B55142AF(bParam0->f_1[bVar0], 2);
										bVar6 = false;
									}
								}
							}
							else if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_43()))
							{
								if (func_81(bParam0, bParam0->f_17[bVar0], fParam8, bParam11))
								{
									if (!UNK_0x869EFD0BC0868856(bParam0->f_17[bVar0]) && !UNK_0xA48EBBEA418ADC94(bParam0->f_17[bVar0]))
									{
										iVar14 = UNK_0xD1960163A3042274(bParam0->f_17[bVar0], -1794415470);
										if (iVar14 == 7)
										{
											UNK_0xA3BF0AA5A2608191(bParam0->f_17[bVar0]);
										}
										UNK_0x11AD11297DC58CC7(bParam0->f_17[bVar0], false);
										UNK_0xE25C96A9C36BE5D2(bParam0->f_17[bVar0], func_43());
									}
								}
							}
						}
						else if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bParam10))
						{
							if (!UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_43()))
							{
								if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 21))
								{
									UNK_0xE25C96A9C36BE5D2(bParam0->f_17[bVar0], func_43());
								}
							}
							else if (UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 21))
							{
								UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 21);
							}
						}
						else if (UNK_0xBFDE4EE64C4BF2D6(bParam0->f_17[bVar0], func_43()) && !UNK_0x4E861BC5B1EDA7BD(bParam10))
						{
							UNK_0x0A94A109271BE75A(bParam0->f_17[bVar0]);
						}
					}
				}
				else if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
				{
					UNK_0x142CC44DB769B57E(&(bParam0->f_1[bVar0]));
					func_67(bVar15[bVar0]);
				}
			}
			bVar0++;
		}
		bVar0 = false;
		while (bVar0 < 3)
		{
			if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
			{
				iVar7[bVar0] = 1;
				bVar1++;
			}
			bVar0++;
		}
		if (!func_63(bParam0, 2))
		{
			if (bVar1 > 0)
			{
				bVar0 = false;
				while (bVar0 < 3)
				{
					if (iVar7[bVar0])
					{
						if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
						{
							if (func_78(bParam0->f_17[bVar0]) || UNK_0x12DE711B1C681E9E(bParam0->f_17[bVar0], UNK_0x16F2683693E537C9(), bParam0->f_8, bParam0->f_8, bParam0->f_8, 0, 1, 0))
							{
								bVar1 = (bVar1 - 1);
								iVar7[bVar0] = 0;
							}
						}
					}
					else if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[bVar0]))
					{
						if (!UNK_0x12DE711B1C681E9E(bParam0->f_17[bVar0], UNK_0x16F2683693E537C9(), (bParam0->f_8 * 0.85f), (bParam0->f_8 * 0.85f), bParam0->f_8, 0, 1, 0) && !func_78(bParam0->f_17[bVar0]))
						{
						}
					}
					bVar0++;
				}
			}
			iVar5 = UNK_0x1C0640BA9A7327B3();
			if ((iVar5 - bParam0->f_11) > 1500 || bVar3 == 1)
			{
				if (bVar1 > 0)
				{
					if (bParam0->f_12 < bVar1)
					{
						if ((bVar1 == bVar3 || (iVar2 + bVar1) == bVar3) && bVar3 > 1)
						{
							if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 5))
							{
								func_61(bParam0, bParam7, 0);
								UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 5);
								bParam0->f_12 = bVar1;
							}
							else
							{
								bParam0->f_12 = bVar1;
							}
						}
						else
						{
							bVar0 = false;
							while (bVar0 < 3)
							{
								if (iVar7[bVar0])
								{
									if (!func_72(bVar0, bParam0))
									{
										if (!UNK_0x2EBF5002C6B6A06C(iVar19[bVar0]))
										{
											if (!UNK_0x7F8A39872A07D2CE(iVar19[bVar0], ""))
											{
												func_70(bParam0, bVar15[bVar0], iVar19[bVar0], 0);
												func_69(bVar0, bParam0);
												bParam0->f_12 = bVar1;
											}
										}
										if (!func_72(bVar0, bParam0))
										{
											func_61(bParam0, bVar15[bVar0], 0);
											func_69(bVar0, bParam0);
											bParam0->f_12 = bVar1;
										}
									}
									else
									{
										bParam0->f_12 = bVar1;
									}
								}
								bVar0++;
							}
						}
					}
				}
				else
				{
					bParam0->f_12 = 0;
				}
			}
		}
		UNK_0x0674E58A79778E99(&(bParam0->f_13), 10);
		if (bVar6 && !bVar12)
		{
			bVar0 = false;
			while (bVar0 < 3)
			{
				if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1[bVar0]))
				{
					UNK_0x142CC44DB769B57E(&(bParam0->f_1[bVar0]));
					func_67(bVar15[bVar0]);
				}
				bVar0++;
			}
			func_67("MORE_SEATS");
			return true;
		}
	}
	return false;
}

void func_69(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 14);
			break;
		case 1:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 15);
			break;
		case 2:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 16);
			break;
	}
}

void func_70(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!UNK_0x2EBF5002C6B6A06C(bParam1))
		{
			if (!UNK_0x7F8A39872A07D2CE(bParam1, ""))
			{
				func_71(bParam1, bParam2, 7500, 1);
			}
		}
	}
	bParam0->f_10 = UNK_0x1C0640BA9A7327B3();
}

void func_71(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	UNK_0xB05D06A3759A10CE(bParam0);
	UNK_0x6B012227B3921E18(bParam1);
	UNK_0x12F275EDEEF63A2B(iParam2, 1);
}

bool func_72(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 14);
		case 1:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 15);
		case 2:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 16);
		default:
			break;
	}
	return false;
}

bool func_73(bool bParam0, float fParam1)
{
	bool bVar0;

	if (UNK_0x405E212DDE472467(bParam0, 0))
	{
		bVar0 = UNK_0x6937EA2286828455(bParam0, 0);
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0x9C66D99E63E8E24C(bVar0) > fParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_74(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (!UNK_0xBFDE4EE64C4BF2D6(bParam0, func_43()))
		{
			iVar0 = UNK_0x8B157DA177FBCF50(bParam0);
			if (UNK_0xDF1306B443CD3D15(bParam1, 0))
			{
				if (UNK_0x12DE711B1C681E9E(bParam0, bParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == bParam1)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_75(bool bParam0, bool bParam1)
{
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0xC844350D5D58C99A(bParam1))
		{
			if (UNK_0xDF1306B443CD3D15(bParam1, 0))
			{
				if (UNK_0x82CCEAB29E9451DD(bParam0, bParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_76(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 17);
			break;
		case 1:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 18);
			break;
		case 2:
			UNK_0x5D96D8530B3D0904(&(bParam1->f_13), 19);
			break;
	}
}

bool func_77(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case 0:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 17);
		case 1:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 18);
		case 2:
			return UNK_0xEAE0D21A50E6C7F4(bParam1->f_13, 19);
		default:
			break;
	}
	return false;
}

bool func_78(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		bVar0 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
		if (UNK_0xDF1306B443CD3D15(bVar0, 0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bParam0))
			{
				bVar1 = UNK_0x3C66DF04E6EA3587(bParam0);
				if (UNK_0xDF1306B443CD3D15(bVar1, 0))
				{
					if (bVar0 == bVar1)
					{
						if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam0, 20f, 20f, 20f, 0, 1, 0) && UNK_0x12DE711B1C681E9E(bParam0, bVar1, 20f, 20f, 20f, 0, 1, 0))
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_79(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (UNK_0x134B62B726CEC8E6(bParam0) == joaat("BUS") || UNK_0x134B62B726CEC8E6(bParam0) == joaat("COACH"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			bVar3 = UNK_0xA30B8362589C124A(bParam0, false, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar3))
			{
				if ((bVar3 == bParam1->f_17[0] || bVar3 == bParam1->f_17[1]) || bVar3 == bParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			bVar4 = UNK_0xA30B8362589C124A(bParam0, true, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar4))
			{
				if ((bVar4 == bParam1->f_17[0] || bVar4 == bParam1->f_17[1]) || bVar4 == bParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			bVar5 = UNK_0xA30B8362589C124A(bParam0, 2, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar5))
			{
				if ((bVar5 == bParam1->f_17[0] || bVar5 == bParam1->f_17[1]) || bVar5 == bParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_80(bool bParam0)
{
	bool bVar0;

	if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
	{
		bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0);
		if (func_66(bVar0, bParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_81(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	bool bVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam1))
	{
		if (UNK_0x0E0E6175453415CB(bParam1))
		{
			bVar0 = UNK_0x6937EA2286828455(bParam1, 0);
			if (!UNK_0x437347B10A200C4B(bVar0, 0))
			{
				if (UNK_0xDF1306B443CD3D15(bVar0, 0))
				{
					if (UNK_0x82CCEAB29E9451DD(UNK_0x16F2683693E537C9(), bVar0))
					{
						if (func_80(bParam0))
						{
							return true;
						}
					}
					else if (bParam3)
					{
						return true;
					}
				}
				else if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return true;
				}
			}
		}
		else if (UNK_0x12DE711B1C681E9E(UNK_0x16F2683693E537C9(), bParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				bVar0 = UNK_0x3C66DF04E6EA3587(UNK_0x16F2683693E537C9());
				if (UNK_0xC844350D5D58C99A(bVar0))
				{
					if (func_66(bVar0, bParam0, 0))
					{
						if (UNK_0xDF1306B443CD3D15(bVar0, 0))
						{
							if (func_82(bVar0))
							{
								return true;
							}
						}
					}
				}
				else
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_82(bool bParam0)
{
	float fVar0;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		fVar0 = UNK_0x9C66D99E63E8E24C(bParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_83(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam1, 0))
		{
			iVar0 = UNK_0x3C66DF04E6EA3587(bParam0);
			if (iVar0 == bParam1)
			{
				return true;
			}
		}
	}
	return false;
}

void func_84()
{
	bool bVar0;
	bool bVar1;

	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
	{
		bVar0 = UNK_0x8B157DA177FBCF50(UNK_0x16F2683693E537C9());
		if (UNK_0xDF1306B443CD3D15(bVar0, 0))
		{
			bVar1 = UNK_0xA30B8362589C124A(bVar0, false, 0);
			if (!UNK_0xEB6A8945D1AC98A1(bVar1))
			{
				if (bVar1 != UNK_0x16F2683693E537C9())
				{
					if (UNK_0xAF6690C489CC6203(bVar1))
					{
						if (!UNK_0xE0EC712E4BE1FC42(bVar1, UNK_0x16F2683693E537C9()))
						{
							UNK_0x0C8C0C840C2D1AD2(bVar1, UNK_0x16F2683693E537C9(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_85(bool bParam0)
{
	int iVar0;

	if (!UNK_0xEAE0D21A50E6C7F4(bParam0->f_13, 25))
	{
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x4E885A246A9D983A(UNK_0x16F2683693E537C9(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (UNK_0xC844350D5D58C99A(bParam0->f_17[iVar0]))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar0]))
				{
					UNK_0x4E885A246A9D983A(bParam0->f_17[iVar0], 32, false);
					UNK_0x4E885A246A9D983A(bParam0->f_17[iVar0], 305, true);
					UNK_0x4E885A246A9D983A(bParam0->f_17[iVar0], 268, true);
					UNK_0x579B0182884711E5(bParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		UNK_0x5D96D8530B3D0904(&(bParam0->f_13), 25);
	}
}

void func_86(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UNK_0xC844350D5D58C99A(bParam0->f_17[iVar0]))
		{
			if (!UNK_0xEB6A8945D1AC98A1(bParam0->f_17[iVar0]))
			{
				if (UNK_0x0E0E6175453415CB(bParam0->f_17[iVar0]))
				{
					UNK_0xA245D14CC59CDD36(bParam0->f_17[iVar0], 0);
					UNK_0x7D732AB707BE9152(bParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
		{
			if (UNK_0x0E0E6175453415CB(UNK_0x16F2683693E537C9()))
			{
				UNK_0xA245D14CC59CDD36(UNK_0x16F2683693E537C9(), 0);
				UNK_0x7D732AB707BE9152(UNK_0x16F2683693E537C9(), 0);
			}
		}
	}
}

Vector3 func_87()
{
	vector3 vVar0;

	return vVar0;
}

int func_88(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == bParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		UNK_0x523BCC9DC80CD82F(bParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = UNK_0x1C0640BA9A7327B3();
		(uParam0[iVar1 /*5*/])->f_4 = bParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_89(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == bParam1)
			{
				if ((uParam0[iVar0 /*5*/])->f_1)
				{
					UNK_0x71199B01895C6202(bParam1);
					func_90(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 1;
					uParam0->f_982 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_90(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_91(bool bParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0xBDEB2DEEF1D23A18(*bParam0))
		{
			UNK_0x15AFB6CBDE990FB6(*bParam0, 1, true);
		}
		if (!bParam1)
		{
			UNK_0xEEEE2E5FA6F78DF0(bParam0);
		}
		else
		{
			UNK_0xAA2AE6161CB0D2DC(*bParam0);
		}
	}
}

float func_92(bool bParam0, vector3 vParam1, int iParam4)
{
	vector3 vVar0;

	if (!UNK_0x437347B10A200C4B(bParam0, 0))
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
	}
	else
	{
		vVar0 = { UNK_0x68F4C0EC296D3901(bParam0, false) };
	}
	return UNK_0x0EB28750412C3A5A(vVar0, vParam1, iParam4);
}

void func_93(int iParam0)
{
	char* sVar0;

	UNK_0xC92DB9682A650680("DHP1_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case 1:
			sVar0 = "dkp1_fdes1";
			break;
		case 4:
			sVar0 = "dkp1_fstuck1";
			break;
		case 5:
			sVar0 = "DKP1_FLOST1";
			break;
		case 2:
			sVar0 = "dkp1_fdes2";
			break;
		case 3:
			sVar0 = "dkp1_fstuck2";
			break;
		case 7:
			sVar0 = "dkp1_ffloyd";
			break;
		case 8:
			sVar0 = "DKP1_FFCAR";
			break;
		case 9:
			sVar0 = "dkp1_FABD";
			break;
		case 10:
			sVar0 = "DKP1_FABS";
			break;
		case 11:
			sVar0 = "DKP1_FABF";
			break;
		case 6:
			sVar0 = "cmn_tdied";
			break;
		default:
			sVar0 = "";
			break;
	}
	func_98(sVar0);
	while (!func_97())
	{
		SYSTEM::WAIT(0);
	}
	if (func_96())
	{
		func_335();
	}
	else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1298.369f, -3062.1f, -71.22691f, 790.9125f, -3068.998f, 63.91419f, 250f, 0, false, 0))
	{
		func_94(787.0854f, -2973.872f, 5.0585f, 256.91f);
	}
	func_330();
	UNK_0x10FAF14A60A0DBE1();
}

void func_94(vector3 vParam0, float fParam3)
{
	if (func_95(Global_76862, 0f, 0f, 0f, 0))
	{
		Global_76862 = { vParam0 };
		Global_76865 = fParam3;
	}
}

bool func_95(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_96()
{
	if (Global_98744 == 7)
	{
		return true;
	}
	return false;
}

bool func_97()
{
	if (Global_3)
	{
		return true;
	}
	if (Global_98744 == 7 || Global_98744 == 8)
	{
		return true;
	}
	return false;
}

void func_98(char* sParam0)
{
	func_106(sParam0);
	func_99(0);
}

void func_99(int iParam0)
{
	int iVar0;

	if (Global_111638.f_9080 || func_7(0))
	{
		iVar0 = func_5();
		if (!func_100(iVar0))
		{
			return;
		}
		UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
		Global_98780 = iParam0;
	}
}

bool func_100(int iParam0)
{
	int iVar0;
	int iVar1;

	func_105();
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x2DA3D7F5B74119E5(5000);
	}
	iVar0 = Global_89496[iParam0 /*5*/];
	iVar1 = Global_76891.f_109[iVar0 /*4*/];
	func_104(iVar1, 1);
	UNK_0xAE08886CF478C471(UNK_0xD803B885F5E47A62(), 0);
	UNK_0x0D00405AED37B7C4(UNK_0xD803B885F5E47A62(), 0);
	func_101(&(Global_111638.f_2358.f_539), iVar1);
	if (Global_92919 == Global_98781)
	{
		Global_111638.f_9080.f_330[iVar1 /*6*/].f_1++;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_89532[iVar1 /*34*/].f_15, true))
	{
		if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x67E5ECB8FD7F5018(0);
		}
	}
	Global_111638.f_9080.f_330[iVar1 /*6*/].f_2++;
	Global_92919 = Global_98781;
	if (iParam0 == -1)
	{
		if (Global_111638.f_9080)
		{
		}
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iParam0 /*5*/].f_1, 4))
	{
		return false;
	}
	if (UNK_0xEAE0D21A50E6C7F4(Global_89496[iParam0 /*5*/].f_1, 5))
	{
		return false;
	}
	return true;
}

void func_101(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_111638.f_18528[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !UNK_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_103(Global_111638.f_18528[iVar0], &vVar2, &fVar5))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_102(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96134[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_9 = 0f;
				Global_96134[iVar0 /*29*/].f_12 = 0f;
				Global_96134[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_10 = 0f;
				Global_96134[iVar0 /*29*/].f_13 = 0f;
				Global_96134[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_11 = 0f;
				Global_96134[iVar0 /*29*/].f_14 = 0f;
				Global_96134[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_26 = 0f;
				Global_96134[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_27 = 0f;
				Global_96134[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_102(var uParam0)
{
	*uParam0 = -15;
}

bool func_103(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return true;
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return true;
		case 9:
			return func_103(8, uParam1, fParam2);
		case 10:
			return func_103(8, uParam1, fParam2);
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return true;
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return true;
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return true;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return true;
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return true;
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return true;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return true;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return true;
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return true;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return true;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return true;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return true;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return true;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return true;
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return true;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return true;
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return true;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return true;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return true;
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return true;
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return true;
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return true;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return true;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return true;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return true;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return true;
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return true;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return true;
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return true;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return true;
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return true;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return true;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return true;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return true;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return true;
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return true;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return true;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return true;
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return true;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return true;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return true;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return true;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return true;
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return true;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return true;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return true;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return true;
		default:
			break;
	}
	return false;
}

void func_104(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92729[iParam0 /*2*/] = 0;
	}
}

void func_105()
{
	Global_98779 = 1;
	if (UNK_0xA3C1B19E1596F41E(UNK_0xD803B885F5E47A62(), 1))
	{
		if (UNK_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_24())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MARRE", 16);
					break;
				case 1:
					StringCopy(&Global_76854, "CMN_FARRE", 16);
					break;
				case 2:
					StringCopy(&Global_76854, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
	}
	else if (!UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		if (UNK_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_24())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MDIED", 16);
					break;
				case 1:
					StringCopy(&Global_76854, "CMN_FDIED", 16);
					break;
				case 2:
					StringCopy(&Global_76854, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
		UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 25);
	}
}

void func_106(char* sParam0)
{
	if (!UNK_0xEA6BC48857E0AC4C(sParam0))
	{
		if (UNK_0x4880526EC51D1C27(sParam0) <= 16)
		{
			StringCopy(&Global_76854, sParam0, 16);
			StringCopy(&Global_76858, "", 16);
			if (UNK_0x192DA571D9133D23())
			{
				UNK_0x32BB9995E509E19B();
			}
		}
	}
}

bool func_107(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xE2F1E99DD161A861(bParam0))
		{
			if (UNK_0xDF1306B443CD3D15(UNK_0x96A5FE5834B81CE7(bParam0), 0))
			{
				return true;
			}
		}
		else if (UNK_0xEC560E589DF8370E(bParam0))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x940C1429253D3B1B(bParam0)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_108(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;

	if (iParam3 == 1)
	{
		if (!UNK_0x7F8A39872A07D2CE("FinaleC2", UNK_0xBB0808A181D4745C()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_98781)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_98781)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_193(1);
		if (iParam0 <= Global_98781)
		{
		}
		iVar1 = func_191(UNK_0xBB0808A181D4745C(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_111638.f_9080.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_189(iVar1);
			cVar3 = { Global_89532[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_111638.f_9080.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
				}
			}
			UNK_0x353729B0A07DC11A(&cVar3, iVar2, Global_98781, iParam0);
		}
		else
		{
			iVar5 = func_184(UNK_0xBB0808A181D4745C(), 1);
			if (iVar5 != -1)
			{
				Global_111638.f_18569[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_183(iVar5)}, 4);
				UNK_0x353729B0A07DC11A(&uVar6, 0, Global_98781, iParam0);
			}
			else
			{
				iVar10 = func_182(&(Global_98744.f_3));
				if (iVar10 > -1)
				{
					Global_111638.f_24981.f_4[iVar10] = 0;
				}
			}
		}
		Global_92922 = iParam2;
		Global_98781 = iParam0;
		func_109(iParam0, bParam1, bParam4, iParam5);
		if (UNK_0x7F8A39872A07D2CE(bParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_98781)
	{
	}
}

void func_109(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	func_110(&Global_105187, UNK_0xBB0808A181D4745C(), iParam0, bParam1, iParam3, bParam2);
}

void func_110(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	*uParam0 = func_24();
	uParam0->f_1 = func_171();
	UNK_0x1BC83DD08AA82285(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		func_145(&(uParam0->f_2884), 0);
		func_144(UNK_0x16F2683693E537C9());
		func_137(UNK_0x16F2683693E537C9(), 0);
		UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_111638.f_2358.f_539.f_294[iVar1];
		if (iVar1 == func_136())
		{
			func_129(UNK_0x16F2683693E537C9(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_98469[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_98469[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_98469[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_98469[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_98469[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_98469[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_98469[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_98469[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_98469[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_98469[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_111638.f_2358.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_111638.f_2358.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 1:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 2:
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				UNK_0x6FB46C25CCB7E6D5(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_111638.f_20559.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_58686[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_111638.f_2358.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_111638.f_2358.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_111638.f_2358.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_111638.f_2358[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_111638.f_2358[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	UNK_0x6FB46C25CCB7E6D5(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	UNK_0x6FB46C25CCB7E6D5(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	UNK_0x6FB46C25CCB7E6D5(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_112(&(uParam0->f_2890), uParam0, bParam5, 1, 1, 0);
	}
	func_111(&(uParam0->f_2980));
	bParam3 = bParam3;
	iParam2 = iParam2;
}

int func_111(var uParam0)
{
	*uParam0 = Global_94593;
	uParam0->f_1 = Global_94594;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_112(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	bool bVar0;

	if (bParam2 == 0)
	{
		bParam2 = UNK_0x16F2683693E537C9();
	}
	if (UNK_0xC844350D5D58C99A(bParam2))
	{
		uParam1->f_5 = func_27(bParam2);
	}
	if (func_126(bParam2, &bVar0, iParam3, iParam5))
	{
		func_113(uParam0, uParam1, bVar0, iParam4);
	}
	else if (UNK_0xC844350D5D58C99A(bVar0))
	{
		if (!UNK_0x437347B10A200C4B(bVar0, 0))
		{
			if (UNK_0x4906F8A34E9F4814(bVar0, joaat("SKYLIFT")) && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bVar0, 0))
			{
				func_113(uParam0, uParam1, bVar0, iParam4);
			}
		}
	}
}

int func_113(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (UNK_0xDF1306B443CD3D15(bParam2, 0))
	{
		func_115(uParam0, bParam2, iParam3);
		uParam1->f_4 = bParam2;
		if (func_114(bParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

bool func_114(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_98744.f_22[iVar0] == bParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_115(var uParam0, bool bParam1, int iParam2)
{
	func_121(bParam1, &(uParam0->f_12));
	uParam0->f_7 = func_118(bParam1, 145, 0);
	uParam0->f_11 = func_117(bParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_116(bParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { UNK_0x68F4C0EC296D3901(bParam1, true) };
		uParam0->f_6 = UNK_0xD9522BA9E27E1349(bParam1);
		uParam0->f_3 = { UNK_0x56E9E0FD5ACCD35D(bParam1) };
		if (UNK_0x3D1053F9EB43B7AD(bParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_76346 == bParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_116(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if (bParam0 == Global_75441.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_117(bool bParam0)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 145;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == bParam0)
			{
				return Global_96085[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_118(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!UNK_0xC844350D5D58C99A(bParam0))
	{
		return 0;
	}
	if (!UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == bParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_96085[iVar0])
				{
					if (iParam2 == 0 || UNK_0x134B62B726CEC8E6(bParam0) == func_119(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_119(int iParam0, int iParam1)
{
	struct<82> Var0;

	if (func_26(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_120(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_120(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = joaat("PREMIER");
			}
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		case 2:
			iVar0 = joaat("BODHI2");
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("BUFFALO2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("BAGGER");
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = joaat("BAGGER");
			}
			else
			{
				iVar0 = joaat("BUFFALO2");
			}
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		default:
			break;
	}
}

void func_121(bool bParam0, var uParam1)
{
	int iVar0;

	if (UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		func_125(uParam1);
		uParam1->f_66 = UNK_0x134B62B726CEC8E6(bParam0);
		StringCopy(&(uParam1->f_1), UNK_0x7888A5D2621AAF2D(bParam0), 16);
		*uParam1 = UNK_0x4EB64970EC291A00(bParam0);
		UNK_0x9412F17E127D9759(bParam0, &(uParam1->f_5), &(uParam1->f_6));
		UNK_0xD00EA977553939A7(bParam0, &(uParam1->f_7), &(uParam1->f_8));
		UNK_0x4D842A28A29F18F6(bParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = UNK_0x214BEAD64D777E8F(bParam0);
		uParam1->f_67 = UNK_0xF22DC2D0CA24A151(bParam0);
		uParam1->f_69 = UNK_0x8EF9B42D5496EC5A(bParam0);
		uParam1->f_70 = UNK_0x9C7B8DC16535B879(bParam0);
		UNK_0xCCBAB59EE36FFC71(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		UNK_0xE04A80C505823410(bParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (UNK_0x812A93B166D97C60(bParam0, 2))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 28);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 3))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 29);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 30);
		}
		if (UNK_0x812A93B166D97C60(bParam0, 1))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_124(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (UNK_0x587993B327460A82(bParam0, 0))
		{
			uParam1->f_68 = UNK_0x74A7D92E3874B5C7(bParam0);
		}
		if (UNK_0xC41A9202669A24C4(uParam1->f_66))
		{
			if (UNK_0x20D5F312838C1136(bParam0))
			{
				switch (UNK_0x38E830634323E0D5(bParam0))
				{
					case 3:
					case 0:
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 23);
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 22);
						break;
					case 4:
					case 1:
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 23);
						UNK_0x0674E58A79778E99(&(uParam1->f_77), 22);
						break;
					case 5:
						UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 23);
			}
		}
		if (!UNK_0x616632A7E7824A9A(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 9);
		}
		if (UNK_0xF566283DA9533594(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 10);
		}
		if (UNK_0xC97B0E5C744424FD(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 13);
			UNK_0x3139754D4D5C3AC3(bParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (UNK_0xE23BB5249C074C85(bParam0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 12);
		}
		func_123(&bParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (UNK_0xDD62D560CFE11A27(bParam0, iVar0 + 1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_77), func_122(iVar0 + 1));
			}
			iVar0++;
		}
		if (UNK_0x92C2290AA46758D3(bParam0, 0))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 11);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_77), 11);
		}
		if (UNK_0x30F813723591D02E(bParam0, "IgnoredByQuickSave") && UNK_0xB2C7CF65CF9B897C(bParam0, "IgnoredByQuickSave"))
		{
			UNK_0x5D96D8530B3D0904(&(uParam1->f_77), 27);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(uParam1->f_77), 27);
		}
	}
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 24;
		case 11:
			return 25;
		case 12:
			return 26;
	}
	return 0;
}

int func_123(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xDF1306B443CD3D15(*bParam0, 0))
	{
		return 0;
	}
	if (UNK_0x40B3F576B41FA183(*bParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (UNK_0xB97ED2A4B56844DE(*bParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (UNK_0xB97ED2A4B56844DE(*bParam0, iVar1))
			{
				switch (UNK_0x3C076D736FE6B7A6(*bParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = UNK_0x0ECB5CA5140957AD(*bParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = UNK_0x3A5601978F787E51(*bParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = UNK_0x3A5601978F787E51(*bParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_124(int iParam0)
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return true;
		default:
			break;
	}
	return false;
}

void func_125(var uParam0)
{
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

bool func_126(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	bool bVar0;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam0))
		{
			if (bParam0 == UNK_0x16F2683693E537C9())
			{
				*bParam1 = UNK_0x728870EB733D12A1();
			}
			else
			{
				*bParam1 = UNK_0x6937EA2286828455(bParam0, 1);
			}
			if (UNK_0xC844350D5D58C99A(*bParam1))
			{
				if (UNK_0xDF1306B443CD3D15(*bParam1, 0))
				{
					if (iParam2 == 0 || UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(*bParam1, true), UNK_0x68F4C0EC296D3901(bParam0, true), 1) < 100f)
					{
						if (UNK_0x4906F8A34E9F4814(*bParam1, joaat("TAXI")))
						{
							if (UNK_0xA30B8362589C124A(*bParam1, -1, 0) != bParam0 && UNK_0xA30B8362589C124A(*bParam1, -1, 0) != 0)
							{
								return false;
							}
						}
						if (func_127(*bParam1, func_24(), 1))
						{
							bVar0 = UNK_0xBB0808A181D4745C();
							if (!UNK_0x7F8A39872A07D2CE(bVar0, "save_anywhere"))
							{
								return false;
							}
							else if (!UNK_0x405E212DDE472467(bParam0, 1))
							{
								return false;
							}
						}
						if (iParam3 == 1)
						{
							if (UNK_0x30F813723591D02E(*bParam1, "IgnoredByQuickSave"))
							{
								if (UNK_0xB2C7CF65CF9B897C(*bParam1, "IgnoredByQuickSave"))
								{
									return false;
								}
							}
						}
						else if (UNK_0x4906F8A34E9F4814(*bParam1, joaat("BLIMP")))
						{
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_127(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar9;

	if (!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_128(iParam1, iVar0, &uVar1, &iVar9))
	{
		if (!bParam2 || UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iVar9], false))
		{
			if (UNK_0x5B6BEDD9A86023B7(&uVar1, bParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_128(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*iParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 1;
				return true;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*iParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*iParam3 = 6;
				return true;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*iParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*iParam3 = 4;
				return true;
			}
			break;
	}
	return false;
}

void func_129(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		iVar0 = func_27(bParam0);
		bVar1 = false;
		while (bVar1 < 12)
		{
			func_135(bParam0, bVar1, &(uParam1->f_13[bVar1]), uParam1[bVar1], &(uParam1->f_26[bVar1]), iParam2, 145);
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 9)
		{
			func_134(bParam0, bVar1, &(uParam1->f_39[bVar1]), &(uParam1->f_49[bVar1]), iParam2, 145);
			bVar1++;
		}
		if (func_26(iVar0))
		{
			uParam1->f_59 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_64;
		}
		else if (UNK_0x8CD06866876216F2() && UNK_0x134B62B726CEC8E6(bParam0) == UNK_0x134B62B726CEC8E6(UNK_0x16F2683693E537C9()))
		{
			if (func_133(161, iParam3))
			{
				uParam1->f_59 = func_130(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_130(752, iParam3, 0);
			}
			uParam1->f_60 = func_130(753, iParam3, 0);
			uParam1->f_61 = func_130(754, iParam3, 0);
		}
		if (UNK_0x8CD06866876216F2() && bParam0 == UNK_0x16F2683693E537C9())
		{
			if (func_133(161, iParam3))
			{
				uParam1->f_59 = func_130(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_130(752, iParam3, 0);
			}
		}
	}
}

int func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_131(iParam1)];
		if (UNK_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_131(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_132();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

int func_132()
{
	return Global_1312745;
}

bool func_133(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_2583656[iParam0 /*3*/][func_131(iParam1)];
	if (UNK_0x89484FAA0691E684(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return false;
}

void func_134(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;

	iVar0 = func_27(bParam0);
	if (bParam0 != 0)
	{
		*uParam2 = UNK_0x98F1B512A2CC07C5(bParam0, bParam1);
		*uParam3 = UNK_0x22286A85EDEAEC56(bParam0, bParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (bParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (bParam0 != 0)
			{
				if (UNK_0xDCCE25EA1C1D1F76(bParam0) && UNK_0x6BE6D34EA3F561AC(bParam0) != -1)
				{
					*uParam2 = UNK_0x6BE6D34EA3F561AC(bParam0);
					*uParam3 = UNK_0x7E1F0AD2CE37D34C(bParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (bParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (bParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		case 1:
			if (bParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		case 2:
			if (bParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_135(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;

	iVar0 = func_27(bParam0);
	if (bParam0 != 0)
	{
		*uParam2 = UNK_0x36C584991B4C183F(bParam0, bParam1);
		*uParam3 = UNK_0xDADA8E1DD0D0D9D9(bParam0, bParam1);
		*uParam4 = UNK_0xAA973E78065E07A0(bParam0, bParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		case 1:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		case 2:
			if (bParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (bParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_136()
{
	func_25();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_137(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = func_27(bParam0);
	if (func_26(iVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (bParam0 == UNK_0x16F2683693E537C9())
		{
			func_138(bParam0, &(Global_111638.f_2358.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111638.f_2358.f_539.f_1730[iVar2 /*4*/][iVar0] = UNK_0x923C832C9AB56966(iVar2);
				if (bParam1)
				{
					iVar1 = UNK_0xFA91242148B28E7D();
					if (Global_111638.f_2358.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_111638.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			UNK_0x812D6591566D640E(UNK_0xD803B885F5E47A62(), &bVar3);
			if (iVar0 == 0)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP0_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
			else if (iVar0 == 1)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP1_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
			else if (iVar0 == 2)
			{
				UNK_0xCDC520E5E48E63D9(joaat("SP2_PARACHUTE_CURRENT_TINT"), bVar3, 1);
			}
		}
	}
}

void func_138(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	bool bVar73;

	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_143(iVar0);
			if (iVar3 != 0)
			{
				Var4 = UNK_0x3F0B5EEC37A0EDD3(bParam0, func_143(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("WEAPON_UNARMED"))
				{
					Var4.f_1 = UNK_0xD2AEDBB0268DF71A(bParam0, Var4);
					if (Var4 == joaat("GADGET_PARACHUTE"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = UNK_0x7DD9FDEA5DFB355E(bParam0, Var4);
					Var4.f_4 = UNK_0x7F1C58A86289ED1A(bParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!UNK_0x9AEFFB8166364079(bParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					bVar1 = false;
					iVar2 = func_141(Var4, bVar1);
					while (iVar2 != 0)
					{
						if (UNK_0xAFB8387ED2D7213E(bParam0, Var4, iVar2))
						{
							UNK_0x5D96D8530B3D0904(&(Var4.f_2), bVar1);
						}
						bVar1++;
						iVar2 = func_141(Var4, bVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = UNK_0x4160B65AE085B5A9();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((UNK_0x310836EE7129BA33(iVar9, &Var11) && !func_140(Var11.f_1)) && iVar72 < 51)
			{
				if (!UNK_0x232048AB4B0E0259(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = UNK_0xD2AEDBB0268DF71A(bParam0, Var4);
					if (UNK_0x440C646F2F11A2A1(bParam0, Var4, 0))
					{
						Var4.f_3 = UNK_0x7DD9FDEA5DFB355E(bParam0, Var4);
						Var4.f_4 = UNK_0x7F1C58A86289ED1A(bParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!UNK_0x9AEFFB8166364079(bParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					bVar73 = false;
					bVar1 = false;
					while (bVar1 < UNK_0xAD2A7A6DFF55841B(iVar9))
					{
						if (UNK_0x31D5E073B6F93CDC(iVar9, bVar1, &Var50))
						{
							if (!func_139(Var50.f_3))
							{
								if (UNK_0xAFB8387ED2D7213E(bParam0, Var4, Var50.f_3))
								{
									UNK_0x5D96D8530B3D0904(&(Var4.f_2), bVar73);
								}
								bVar73++;
							}
						}
						bVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!UNK_0x440C646F2F11A2A1(bParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

bool func_139(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return true;
	}
	return false;
}

bool func_140(int iParam0)
{
	if (UNK_0x8CD06866876216F2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return false;
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return false;
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return false;
			case joaat("WEAPON_BULLPUPRIFLE"):
				return false;
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return false;
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return false;
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return false;
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return false;
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return false;
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case -1523701417:
			case -2112826155:
			case -664359727:
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
				return true;
		}
	}
	return false;
}

int func_141(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_142(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					bVar2 = false;
					while (bVar2 < UNK_0xA942498EEAA3EEAD(iVar1))
					{
						if (UNK_0x8B27EE8DAA2A39B3(iVar1, bVar2, &Var43))
						{
							if (!func_139(Var43.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						bVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_142(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = UNK_0x037F36BEA9A47381();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (UNK_0x6532540B34EE6273(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_143(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("SLOT_UNARMED");
			break;
		case 1:
			iVar0 = joaat("SLOT_KNIFE");
			break;
		case 2:
			iVar0 = joaat("SLOT_NIGHTSTICK");
			break;
		case 3:
			iVar0 = joaat("SLOT_HAMMER");
			break;
		case 4:
			iVar0 = joaat("SLOT_BAT");
			break;
		case 5:
			iVar0 = joaat("SLOT_CROWBAR");
			break;
		case 6:
			iVar0 = joaat("SLOT_GOLFCLUB");
			break;
		case 7:
			iVar0 = joaat("SLOT_STUNGUN");
			break;
		case 8:
			iVar0 = joaat("SLOT_PISTOL");
			break;
		case 9:
			iVar0 = joaat("SLOT_COMBATPISTOL");
			break;
		case 10:
			iVar0 = joaat("SLOT_APPISTOL");
			break;
		case 11:
			iVar0 = joaat("SLOT_MICROSMG");
			break;
		case 12:
			iVar0 = joaat("SLOT_SMG");
			break;
		case 13:
			iVar0 = joaat("SLOT_ASSAULTRIFLE");
			break;
		case 14:
			iVar0 = joaat("SLOT_CARBINERIFLE");
			break;
		case 15:
			iVar0 = joaat("SLOT_ADVANCEDRIFLE");
			break;
		case 16:
			iVar0 = joaat("SLOT_MG");
			break;
		case 17:
			iVar0 = joaat("SLOT_COMBATMG");
			break;
		case 18:
			iVar0 = joaat("SLOT_PUMPSHOTGUN");
			break;
		case 19:
			iVar0 = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
		case 20:
			iVar0 = joaat("SLOT_ASSAULTSHOTGUN");
			break;
		case 21:
			iVar0 = joaat("SLOT_SNIPERRIFLE");
			break;
		case 22:
			iVar0 = joaat("SLOT_HEAVYSNIPER");
			break;
		case 23:
			iVar0 = joaat("SLOT_GRENADELAUNCHER");
			break;
		case 24:
			iVar0 = joaat("SLOT_RPG");
			break;
		case 25:
			iVar0 = joaat("SLOT_MINIGUN");
			break;
		case 26:
			iVar0 = joaat("SLOT_GRENADE");
			break;
		case 27:
			iVar0 = joaat("SLOT_STICKYBOMB");
			break;
		case 28:
			iVar0 = joaat("SLOT_SMOKEGRENADE");
			break;
		case 29:
			iVar0 = joaat("SLOT_MOLOTOV");
			break;
		case 30:
			iVar0 = joaat("SLOT_FIREEXTINGUISHER");
			break;
		case 31:
			iVar0 = joaat("SLOT_PETROLCAN");
			break;
		case 33:
			iVar0 = joaat("SLOT_PARACHUTE");
			break;
		case 34:
			iVar0 = joaat("SLOT_DIGISCANNER");
			break;
		case 35:
			iVar0 = joaat("SLOT_OBJECT");
			break;
		case 36:
			iVar0 = joaat("SLOT_ASSAULTSMG");
			break;
		case 37:
			iVar0 = joaat("SLOT_BULLPUPSHOTGUN");
			break;
		case 38:
			iVar0 = joaat("SLOT_PISTOL50");
			break;
	}
	return iVar0;
}

void func_144(bool bParam0)
{
	int iVar0;

	iVar0 = func_27(bParam0);
	if (func_26(iVar0) && !UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		Global_111638.f_2358.f_539.f_294[iVar0] = UNK_0x34460709B9A5160B(bParam0);
	}
}

void func_145(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;

	*uParam0 = { UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true) };
	uParam0->f_3 = UNK_0xD9522BA9E27E1349(UNK_0x16F2683693E537C9());
	uParam0->f_5 = UNK_0x75B806D0A76CB67D(UNK_0x16F2683693E537C9());
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		uParam0->f_4 = UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (UNK_0x8A22C4C08282BF26(joaat("FINALE_CHOICE")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (UNK_0xEAE0D21A50E6C7F4(Global_76870, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (UNK_0x4D570FEF9D230CE7(UNK_0x16F2683693E537C9()) == UNK_0x0D1736C2E221BCEA(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_148(&iVar0))
		{
			if (func_147(iVar0, &vVar1, &uVar4))
			{
				vVar1.f_2 = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar5 = func_24();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_146(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

bool func_146(vector3 vParam0, bool bParam3, vector3 vParam4)
{
	int iVar0;
	int iVar1;

	if (!UNK_0xD1BF3090E1F8300E(vParam0))
	{
		iVar0 = UNK_0x0D1736C2E221BCEA(vParam4, bParam3);
		if (!UNK_0x31609A585163CBAC(iVar0))
		{
			return false;
		}
		iVar1 = UNK_0x16804749AA17EEA8(vParam0);
		if (iVar1 == iVar0)
		{
			return true;
		}
	}
	return false;
}

bool func_147(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_95(*uParam1, 0f, 0f, 0f, 0);
}

bool func_148(int iParam0)
{
	if (!UNK_0x437347B10A200C4B(UNK_0x16F2683693E537C9(), 0) && !UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		if (func_170())
		{
			*iParam0 = func_154(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), false), 6, -1, 0, 1, -1);
			if (func_153(*iParam0) && !func_149(*iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_149(int iParam0)
{
	return func_150(iParam0, 0, 1);
}

bool func_150(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (bParam2)
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_98796.f_1357[iParam0], bParam1);
	}
	else if (UNK_0x8CD06866876216F2())
	{
		if (func_152() == 0)
		{
			return UNK_0xEAE0D21A50E6C7F4(func_130(func_151(iParam0), -1, 0), bParam1);
		}
	}
	else
	{
		return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_668[iParam0], bParam1);
	}
	return false;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
		case 1:
			return 828;
		case 2:
			return 829;
		case 3:
			return 830;
		case 4:
			return 831;
		case 5:
			return 832;
		case 6:
			return 833;
		case 7:
			return 834;
		case 8:
			return 835;
		case 9:
			return 836;
		case 10:
			return 837;
		case 11:
			return 838;
		case 12:
			return 839;
		case 13:
			return 840;
		case 14:
			return 841;
		case 15:
			return 843;
		case 16:
			return 844;
		case 17:
			return 845;
		case 18:
			return 846;
		case 19:
			return 847;
		case 20:
			return 848;
		case 21:
			return 849;
		case 22:
			return 850;
		case 23:
			return 851;
		case 24:
			return 852;
		case 25:
			return 853;
		case 26:
			return 854;
		case 27:
			return 855;
		case 28:
			return 856;
		case 29:
			return 857;
		case 30:
			return 858;
		case 31:
			return 859;
		case 32:
			return 860;
		case 33:
			return 861;
		case 34:
			return 862;
		case 35:
			return 863;
		case 36:
			return 864;
		case 37:
			return 865;
		case 38:
			return 866;
		case 39:
			return 867;
		case 40:
			return 871;
		case 41:
			return 872;
		case 42:
			return 873;
		case 43:
			return 874;
		case 44:
			return 9977;
		case 45:
			return 3808;
		case 46:
			return 5383;
		case 47:
			return 6155;
		case 48:
			return 7232;
		case 49:
			return 7878;
		case 52:
			return 8912;
		case 50:
			return 8265;
		case 51:
			return 8267;
		default:
			break;
	}
	return 11511;
}

int func_152()
{
	return Global_30768;
}

bool func_153(int iParam0)
{
	return func_150(iParam0, 5, 1);
}

int func_154(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam3 == 6 || iParam3 == func_169(iVar0))
		{
			if (!bParam5 || func_168(iVar0))
			{
				fVar1 = UNK_0x0EB28750412C3A5A(vParam0, func_155(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (bParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_155(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
		case 4:
			return 1208.333f, -470.917f, 65.208f;
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		case 45:
			return func_165(Global_100839);
		case 46:
			if (Global_1590374 != func_18())
			{
				if (func_164(Global_1590374))
				{
					return func_157(2, 2);
				}
				else if (func_156(Global_1590374))
				{
					return func_157(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		case 47:
			return 510.1f, 4749.5f, -69f;
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
		case 50:
			return Global_1696048;
		case 51:
			return 1100f, 220f, -50f;
	}
	return 1000000f, 1000000f, 1000000f;
}

bool func_156(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, false) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, true)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 2))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_157(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar6;

	vVar6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590374 != func_18())
	{
		if (iParam1 == 3)
		{
			if (func_158(iParam0, 1, &vVar0, 0, 0))
			{
				vVar6 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 4))
			{
				if (func_158(iParam0, 1, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
			else if (UNK_0xEAE0D21A50E6C7F4(Global_1590535[Global_1590374 /*876*/].f_274.f_259, 5))
			{
				if (func_158(iParam0, 2, &vVar0, 0, 0))
				{
					vVar6 = { vVar0 };
				}
			}
		}
	}
	return vVar6;
}

bool func_158(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar6;
	struct<4> Var12;
	vector3 vVar18;

	if (!func_163(iParam3, &Var0))
	{
		return false;
	}
	if (!func_163(iParam1, &vVar6))
	{
		return false;
	}
	if (!bParam4)
	{
		Var12 = { func_161(iParam0) };
	}
	else
	{
		Var12 = { func_160(iParam0) };
	}
	vVar18 = { Var12 - Var0 };
	vVar18 = { func_159(vVar18, -Var0.f_3.f_2) };
	vVar18 = { func_159(vVar18, vVar6.f_3.f_2) };
	*uParam2 = { UNK_0x8A5E176FF719A014(vVar6, 0f, vVar18) };
	uParam2->f_3 = { Var12.f_3 };
	return true;
}

Vector3 func_159(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

struct<6> func_160(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_161(int iParam0)
{
	return func_162(iParam0);
}

struct<6> func_162(int iParam0)
{
	struct<6> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

bool func_163(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
		default:
			break;
	}
	return false;
}

bool func_164(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 3) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 4)) || UNK_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_274.f_259, 5))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_165(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
		case 2:
			return 1060f, -2990f, -35f;
		case 3:
			return 974.9542f, -3000.091f, -35f;
		case 6:
			return -1586.36f, -566.6f, 106.17f;
		case 7:
			return -1389.87f, -465.17f, 82.68f;
		case 8:
			return -145.81f, -590.2f, 171.13f;
		case 9:
			return -62.49f, -823.55f, 288.74f;
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
		case 10:
			return 1103.562f, -3000f, -40f;
		case 11:
			return 938.3077f, -3196.112f, -100f;
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
		case 13:
			return 520.0001f, 4750f, -70f;
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
		case 16:
			return -1421.015f, -3012.587f, -80f;
		case 17:
			if (func_166() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		default:
			return 0f, 0f, -200f;
	}
	return 0f, 0f, -200f;
}

int func_166()
{
	return func_167(UNK_0xD803B885F5E47A62());
}

int func_167(int iParam0)
{
	return UNK_0xDC4DD3980107166C(Global_2425662[iParam0 /*421*/].f_310.f_3, 28, 31);
}

bool func_168(int iParam0)
{
	return func_150(iParam0, 0, 0);
}

int func_169(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 50:
			return 0;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 16:
			return 1;
		case 17:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 2;
		case 23:
			return 2;
		case 24:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 27:
			return 2;
		case 28:
			return 3;
		case 29:
			return 3;
		case 30:
			return 3;
		case 31:
			return 3;
		case 32:
			return 3;
		case 33:
			return 3;
		case 34:
			return 3;
		case 35:
			return 3;
		case 36:
			return 3;
		case 37:
			return 3;
		case 38:
			return 3;
		case 39:
			return 4;
		case 40:
			return 4;
		case 41:
			return 4;
		case 42:
			return 4;
		case 43:
			return 4;
		case 44:
			return 4;
		case 45:
			return 5;
		case 46:
			return 3;
		case 47:
			return 3;
		case 48:
			return 3;
		case 49:
			return 3;
		case 52:
			return 3;
		case 51:
			return 1;
	}
	return 6;
}

bool func_170()
{
	return Global_98796.f_345 > 0;
}

var func_171()
{
	var uVar0;

	func_181(&uVar0, UNK_0x4460E481B9E33ADA());
	func_180(&uVar0, UNK_0x8D199E381D262EEF());
	func_179(&uVar0, UNK_0xD8A54335F18763BA());
	func_174(&uVar0, UNK_0x972A296334C9D57B());
	func_173(&uVar0, UNK_0x118229AD063C3C1D());
	func_172(&uVar0, UNK_0x1A61A218F5C5EB02());
	return uVar0;
}

void func_172(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_173(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_174(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_178(*uParam0);
	iVar1 = func_176(*uParam0);
	if (iParam1 < 1 || iParam1 > func_175(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_175(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
	}
	return 30;
}

int func_176(bool bParam0)
{
	return (SYSTEM::SHIFT_RIGHT(bParam0, 26) & 31 * func_177(UNK_0xEAE0D21A50E6C7F4(bParam0, 31), -1, 1)) + 2011;
}

int func_177(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_178(int iParam0)
{
	return iParam0 & 15;
}

void func_179(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_180(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_181(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_182(bool bParam0)
{
	if (UNK_0x7F8A39872A07D2CE("BailBond1", bParam0))
	{
		return 0;
	}
	else if (UNK_0x7F8A39872A07D2CE("BailBond2", bParam0))
	{
		return 1;
	}
	else if (UNK_0x7F8A39872A07D2CE("BailBond3", bParam0))
	{
		return 2;
	}
	else if (UNK_0x7F8A39872A07D2CE("BailBond4", bParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_183(int iParam0)
{
	struct<2> Var0;

	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		default:
			break;
	}
	return Var0;
}

int func_184(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar33;
	int iVar34;

	iVar33 = UNK_0x12AB0310C2281427(bParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_185(iVar0, &bVar1);
		if (UNK_0x12AB0310C2281427(bVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_185(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			func_186(bParam1, "Abigail1", func_188(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 1:
			func_186(bParam1, "Abigail2", func_188(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 2:
			func_186(bParam1, "Barry1", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 3:
			func_186(bParam1, "Barry2", func_188(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		case 4:
			func_186(bParam1, "Barry3", func_188(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 5:
			func_186(bParam1, "Barry3A", func_188(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 6:
			func_186(bParam1, "Barry3C", func_188(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 7:
			func_186(bParam1, "Barry4", func_188(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_187(iParam0), 0, 0);
			break;
		case 8:
			func_186(bParam1, "Dreyfuss1", func_188(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 9:
			func_186(bParam1, "Epsilon1", func_188(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 10:
			func_186(bParam1, "Epsilon2", func_188(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 11:
			func_186(bParam1, "Epsilon3", func_188(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 12:
			func_186(bParam1, "Epsilon4", func_188(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 13:
			func_186(bParam1, "Epsilon5", func_188(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 14:
			func_186(bParam1, "Epsilon6", func_188(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 15:
			func_186(bParam1, "Epsilon7", func_188(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 16:
			func_186(bParam1, "Epsilon8", func_188(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 17:
			func_186(bParam1, "Extreme1", func_188(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 18:
			func_186(bParam1, "Extreme2", func_188(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 19:
			func_186(bParam1, "Extreme3", func_188(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 20:
			func_186(bParam1, "Extreme4", func_188(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 21:
			func_186(bParam1, "Fanatic1", func_188(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_187(iParam0), 1, 0);
			break;
		case 22:
			func_186(bParam1, "Fanatic2", func_188(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_187(iParam0), 1, 0);
			break;
		case 23:
			func_186(bParam1, "Fanatic3", func_188(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_187(iParam0), 0, 1);
			break;
		case 24:
			func_186(bParam1, "Hao1", func_188(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_187(iParam0), 0, 1);
			break;
		case 25:
			func_186(bParam1, "Hunting1", func_188(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 26:
			func_186(bParam1, "Hunting2", func_188(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 27:
			func_186(bParam1, "Josh1", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 28:
			func_186(bParam1, "Josh2", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		case 29:
			func_186(bParam1, "Josh3", func_188(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		case 30:
			func_186(bParam1, "Josh4", func_188(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 31:
			func_186(bParam1, "Maude1", func_188(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 32:
			func_186(bParam1, "Minute1", func_188(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 33:
			func_186(bParam1, "Minute2", func_188(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 34:
			func_186(bParam1, "Minute3", func_188(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 35:
			func_186(bParam1, "MrsPhilips1", func_188(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 36:
			func_186(bParam1, "MrsPhilips2", func_188(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 37:
			func_186(bParam1, "Nigel1", func_188(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 38:
			func_186(bParam1, "Nigel1A", func_188(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		case 39:
			func_186(bParam1, "Nigel1B", func_188(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		case 40:
			func_186(bParam1, "Nigel1C", func_188(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		case 41:
			func_186(bParam1, "Nigel1D", func_188(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_187(iParam0), 1, 1);
			break;
		case 42:
			func_186(bParam1, "Nigel2", func_188(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		case 43:
			func_186(bParam1, "Nigel3", func_188(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 1);
			break;
		case 44:
			func_186(bParam1, "Omega1", func_188(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 45:
			func_186(bParam1, "Omega2", func_188(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 46:
			func_186(bParam1, "Paparazzo1", func_188(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 47:
			func_186(bParam1, "Paparazzo2", func_188(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 48:
			func_186(bParam1, "Paparazzo3", func_188(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 49:
			func_186(bParam1, "Paparazzo3A", func_188(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 50:
			func_186(bParam1, "Paparazzo3B", func_188(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 51:
			func_186(bParam1, "Paparazzo4", func_188(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 52:
			func_186(bParam1, "Rampage1", func_188(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 54:
			func_186(bParam1, "Rampage3", func_188(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 55:
			func_186(bParam1, "Rampage4", func_188(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 56:
			func_186(bParam1, "Rampage5", func_188(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_187(iParam0), 0, 0);
			break;
		case 53:
			func_186(bParam1, "Rampage2", func_188(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_187(iParam0), 1, 0);
			break;
		case 57:
			func_186(bParam1, "TheLastOne", func_188(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 58:
			func_186(bParam1, "Tonya1", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 59:
			func_186(bParam1, "Tonya2", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 60:
			func_186(bParam1, "Tonya3", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 61:
			func_186(bParam1, "Tonya4", func_188(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		case 62:
			func_186(bParam1, "Tonya5", func_188(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_187(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

void func_186(bool bParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7, char* sParam10, char* sParam11, int iParam12, char* sParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, var uParam24)
{
	bParam0->f_4 = iParam5;
	*bParam0 = sParam1;
	bParam0->f_1 = { Param2 };
	bParam0->f_3 = iParam4;
	bParam0->f_5 = iParam6;
	bParam0->f_6 = { vParam7 };
	bParam0->f_9 = sParam10;
	StringCopy(&(bParam0->f_10), sParam11, 16);
	bParam0->f_14 = iParam12;
	bParam0->f_15 = sParam13;
	StringCopy(&(bParam0->f_16), sParam14, 24);
	bParam0->f_22 = iParam15;
	bParam0->f_23 = iParam16;
	bParam0->f_24 = iParam17;
	bParam0->f_25 = iParam18;
	bParam0->f_26 = iParam19;
	bParam0->f_27 = iParam20;
	bParam0->f_28 = iParam21;
	bParam0->f_29 = iParam22;
	bParam0->f_30 = iParam23;
	bParam0->f_31 = uParam24;
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 1;
		case 7:
			return 0;
		case 8:
			return 1;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 12:
			return 1;
		case 13:
			return 0;
		case 14:
			return 1;
		case 15:
			return 0;
		case 16:
			return 1;
		case 17:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 1;
		case 24:
			return 1;
		case 25:
			return 1;
		case 26:
			return 1;
		case 27:
			return 0;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 1;
		case 31:
			return 0;
		case 32:
			return 1;
		case 33:
			return 1;
		case 34:
			return 1;
		case 35:
			return 0;
		case 36:
			return 0;
		case 37:
			return 0;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 1;
		case 41:
			return 1;
		case 42:
			return 1;
		case 43:
			return 1;
		case 44:
			return 0;
		case 45:
			return 0;
		case 46:
			return 1;
		case 47:
			return 1;
		case 48:
			return 0;
		case 49:
			return 1;
		case 50:
			return 1;
		case 51:
			return 1;
		case 52:
			return 1;
		case 54:
			return 1;
		case 55:
			return 1;
		case 56:
			return 1;
		case 53:
			return 1;
		case 57:
			return 1;
		case 58:
			return 1;
		case 59:
			return 1;
		case 60:
			return 1;
		case 61:
			return 1;
		case 62:
			return 1;
		default:
			break;
	}
	return 0;
}

struct<2> func_188(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = { func_183(iParam0) };
	if (UNK_0xEA6BC48857E0AC4C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_190(Global_111638.f_9080.f_99.f_205[10]);
		case 74:
		case 75:
			return func_190(Global_111638.f_9080.f_99.f_205[8]);
		case 84:
		case 85:
			return func_190(Global_111638.f_9080.f_99.f_205[11]);
		case 90:
			return func_190(Global_111638.f_9080.f_99.f_205[7]);
		case 93:
			return func_190(Global_111638.f_9080.f_99.f_205[9]);
	}
	return 0;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
	}
	return -1;
}

int func_191(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = UNK_0x12AB0310C2281427(bParam0);
	iVar1 = func_192(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_192(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_89532[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_193(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111638.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0 /*3*/][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0 /*3*/][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0 /*3*/][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0 /*3*/][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0 /*3*/][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0 /*3*/][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0 /*3*/][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0 /*3*/][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0 /*3*/][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0 /*3*/][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0 /*3*/][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0 /*3*/][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0 /*3*/][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0 /*3*/][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0 /*3*/][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0 /*3*/][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0 /*3*/][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0 /*3*/][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_194()
{
	int iVar0;
	var uVar1;

	switch (iLocal_2104)
	{
		case 0:
			func_228(&uLocal_460, "PORT_OF_LS_PREP_1");
			if (UNK_0x757EF87A33649210())
			{
				UNK_0x82E51BCA72537B6C(800);
			}
			func_226(&Local_188, 324.7653f, -2974.495f, -1f, 0.1f, 0.1f, 2f, 1, Local_55[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1);
			if (UNK_0xB87F6CF6E5628C67(joaat("PACKER")) && UNK_0xB87F6CF6E5628C67(joaat("ARMYTRAILER")))
			{
				func_108(1, "STAGE 1: Get to crane", 0, 0, 0, 1);
				func_225(587, 0);
				func_224(&uLocal_213, 1, 0, "FLOYD", 0, 1);
				func_223(6, 0);
				Local_55[2 /*2*/] = UNK_0x122AAB0B1D6F55AD(joaat("PACKER"), 298.2343f, -2942.77f, 5.0003f, 0f, true, true, false);
				UNK_0x05EC10F460C3A4AF(Local_55[2 /*2*/], 0);
				UNK_0x44A200C9B6E1CEA6(Local_55[2 /*2*/], true);
				UNK_0xC6A6B4DDD6DC073A(Local_55[2 /*2*/], false);
				UNK_0xA22F71BBC8173C39(Local_55[2 /*2*/], false);
				Local_55[1 /*2*/] = UNK_0x122AAB0B1D6F55AD(joaat("ARMYTRAILER"), 298.27f, -2951.27f, 7.86f, 0f, true, true, false);
				UNK_0xC74DAD25331A5425(Local_55[2 /*2*/], Local_55[1 /*2*/], 0.5f);
				UNK_0xEB82176F26E339BD(Local_55[1 /*2*/]);
				UNK_0xA22F71BBC8173C39(Local_55[1 /*2*/], false);
				UNK_0x44A200C9B6E1CEA6(Local_55[1 /*2*/], true);
				bLocal_383 = false;
				UNK_0x7D6CA5F52B3748BF(289.0847f, -2980.382f, 9.24156f, 320.426f, -2931.6f, 4f, 0, 1, 1, 1);
				bLocal_392 = true;
				UNK_0x7352ACF3368DF65F("OnlyAllowScriptTriggerPoliceScanner", 0);
				iLocal_2104++;
			}
			break;
		case 1:
			if (func_222())
			{
				func_221(&uLocal_460, bLocal_49);
				func_221(&uLocal_460, bLocal_50);
				iLocal_396 = -1;
				iLocal_397 = 0;
				iLocal_2104++;
			}
			break;
		case 2:
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_55[0 /*2*/], 0))
			{
				switch (iLocal_397)
				{
					case 0:
						if (!UNK_0xFEBC1E4EC9E001F0())
						{
							if (iLocal_396 == -1)
							{
								iLocal_396 = UNK_0x1C0640BA9A7327B3() + 5000;
							}
							if (UNK_0x1C0640BA9A7327B3() > iLocal_396)
							{
								func_220("DKP1_SUBTURN", -1);
								iLocal_397++;
							}
						}
						break;
					case 1:
						if (!UNK_0xFEBC1E4EC9E001F0())
						{
							func_220("SUB_HELP", -1);
							iLocal_397++;
						}
						break;
				}
			}
			else
			{
				if (iLocal_397 == 0)
				{
					iLocal_396 = -1;
				}
				if (UNK_0xFEBC1E4EC9E001F0())
				{
					if (func_219("DKP1_SUBTURN") || func_219("SUB_HELP"))
					{
						UNK_0xA37A90C62806D848(1);
					}
				}
			}
			if (UNK_0x7B5606C651AB51B5(Local_55[0 /*2*/], 3, 10000))
			{
				func_93(1);
			}
			if (func_92(UNK_0x16F2683693E537C9(), 324.7653f, -2974.495f, -1.5f, 1) < 150f)
			{
				if (UNK_0xE3934829A331AF92("DOCKS_HEIST_PREP_1_LIFT_SUB", 0))
				{
					bLocal_457 = true;
				}
				func_91(&(Local_169[2 /*2*/]), 0);
				func_89(&uLocal_460, joaat("PROP_SUB_RELEASE"));
			}
			else
			{
				UNK_0xE96F19797E59AB06();
				bLocal_457 = false;
			}
			if (func_107(Local_64[6 /*10*/]))
			{
				if ((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, true, 0) || UNK_0xE9FDA1035CFEA94F(Local_64[6 /*10*/])) || func_10(UNK_0x16F2683693E537C9(), Local_64[6 /*10*/], 1) > 100f)
				{
					UNK_0xA3BF0AA5A2608191(Local_64[6 /*10*/]);
					func_9(&(Local_64[6 /*10*/]), 1, 0, 1);
				}
			}
			if (func_107(Local_64[7 /*10*/]))
			{
				if ((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, true, 0) || UNK_0xE9FDA1035CFEA94F(Local_64[7 /*10*/])) || func_10(UNK_0x16F2683693E537C9(), Local_64[7 /*10*/], 1) > 100f)
				{
					UNK_0xA3BF0AA5A2608191(Local_64[7 /*10*/]);
					func_9(&(Local_64[7 /*10*/]), 1, 0, 1);
				}
			}
			if (func_107(Local_64[4 /*10*/]))
			{
				if ((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, true, 0) || UNK_0xE9FDA1035CFEA94F(Local_64[4 /*10*/])) || func_10(UNK_0x16F2683693E537C9(), Local_64[4 /*10*/], 1) > 100f)
				{
					UNK_0xA3BF0AA5A2608191(Local_64[4 /*10*/]);
					func_9(&(Local_64[4 /*10*/]), 1, 0, 1);
				}
			}
			if (func_107(Local_64[5 /*10*/]))
			{
				if ((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, true, 0) || UNK_0xE9FDA1035CFEA94F(Local_64[5 /*10*/])) || func_10(UNK_0x16F2683693E537C9(), Local_64[5 /*10*/], 1) > 100f)
				{
					UNK_0xA3BF0AA5A2608191(Local_64[5 /*10*/]);
					func_9(&(Local_64[5 /*10*/]), 1, 0, 1);
				}
			}
			if (func_226(&Local_188, 324.7653f, -2974.495f, -1.5f, 0.1f, 0.1f, 2f, 0, Local_55[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1) || ((UNK_0xE4EDC4B0E92C078B(Local_188.f_5) && UNK_0x3D1053F9EB43B7AD(Local_55[0 /*2*/], 312.8557f, -2974.003f, 1.19166f, 339.1654f, -2974.348f, -6.70078f, 15f, 0, true, 0)) && func_218(UNK_0x16F2683693E537C9(), Local_55[0 /*2*/])))
			{
				if (func_107(Local_55[2 /*2*/]) && func_107(Local_55[1 /*2*/]))
				{
					func_217(&Local_188, 0);
					func_216(6, 0);
					UNK_0xC92DB9682A650680("DHP1_STOP");
					func_215(0, -1);
					UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, 256);
					iLocal_452 = UNK_0x1C0640BA9A7327B3();
					iLocal_2104++;
				}
			}
			else if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0 && UNK_0xE4EDC4B0E92C078B(Local_188.f_5))
			{
				UNK_0x922D0EFFF8F2403B(6, 324.7653f, -2974.495f, -3.5f, 0f, 0f, 0f, 0f, 0f, 0f, 5f, 5f, 5f, 255, 255, false, 65, 0, 0, 2, false, false, false, false);
			}
			break;
		case 3:
			if (func_82(Local_55[0 /*2*/]) || (UNK_0x1C0640BA9A7327B3() - iLocal_452) > 3500)
			{
				iLocal_444 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), 341.6419f, -2965.525f, 4.037704f, 17.06695f, 0.473599f, 112.4448f, 34f, 0, 2);
				UNK_0xE3BB8E05FCEB3FBE(iLocal_444, true);
				UNK_0x91F5B0244AAE6222(iLocal_444, "HAND_SHAKE", 0.4f);
				UNK_0x86F44313DFA8F00C(iLocal_444, 341.6419f, -2965.525f, 4.037704f, -4.346406f, 0.473595f, 112.4448f, 34f, 6000, 1, 1, 2);
				func_209(0, 340.6675f, -2964.01f, 1.4937f, 1, 0, 1, 3000, 0, 1);
				func_88(&uLocal_460, joaat("PROP_TARP_STRAP"));
				UNK_0xA47B46945FF6DE74(Local_55[0 /*2*/], vLocal_411, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(Local_55[0 /*2*/], bLocal_414);
				iLocal_452 = UNK_0x1C0640BA9A7327B3();
				iLocal_410 = 0;
				UNK_0x8B4C4CA774181102(8f, 0f, 4);
				iLocal_2104++;
			}
			else
			{
				func_46(Local_55[0 /*2*/], 7f, 1, 1056964608 /* Float: 0.5f */, 0, 1, 0);
			}
			break;
		case 4:
			if (func_199())
			{
				iLocal_2104++;
			}
			break;
		case 5:
			if (UNK_0x62A1F4500E8F07E0() && UNK_0xB87F6CF6E5628C67(joaat("PROP_TARP_STRAP")))
			{
				UNK_0x29E8331978B73E7F(Local_55[2 /*2*/], "DockHeist_truck", 0, false, 0);
				UNK_0x29E8331978B73E7F(Local_55[0 /*2*/], "submarine", 0, joaat("SUBMERSIBLE"), 0);
				UNK_0x29E8331978B73E7F(Local_55[1 /*2*/], "dockheist_trailer", 0, joaat("ARMYTRAILER"), 0);
				UNK_0x29E8331978B73E7F(false, "sub_cover", 2, joaat("PROP_SUB_COVER_01"), 0);
				UNK_0x29E8331978B73E7F(false, "Floyd", 2, joaat("IG_FLOYD"), 0);
				UNK_0xA0A8D79ACBBD1CB8("Trevor", UNK_0x16F2683693E537C9(), 0);
				UNK_0x0882E3DC0C991680(Local_55[2 /*2*/], 1);
				UNK_0x05EC10F460C3A4AF(Local_55[2 /*2*/], 1);
				func_198(0);
				UNK_0x420FE818E70BB523(4);
				UNK_0xFCA2A436FD40C153(0, 0, 1, 0);
				UNK_0x4C902758BEA97C68(0);
				iLocal_2104++;
			}
			break;
		case 6:
			if (UNK_0x22A8E52414415B76())
			{
				if (UNK_0xBCFF5481C5F58C19("PO1_08_sub_waterplane"))
				{
					UNK_0x81CF20E10AAD5FD5("PO1_08_sub_waterplane");
				}
			}
			if (UNK_0xEABED1927EFB48CA(0))
			{
				UNK_0x2FB9A57162E54BAB(0f);
				UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
				UNK_0xBFE31971E49FA500(1);
				UNK_0x8BCB70EB440DED83(1);
				UNK_0xBF40D896CA4BDBE7();
			}
			if (!UNK_0xC844350D5D58C99A(Local_64[3 /*10*/]))
			{
				if (UNK_0xC844350D5D58C99A(UNK_0x6450C2A9FBA3C3BF("Floyd", false)))
				{
					Local_64[3 /*10*/] = UNK_0x940C1429253D3B1B(UNK_0x6450C2A9FBA3C3BF("Floyd", false));
					func_224(&uLocal_213, 1, Local_64[3 /*10*/], "FLOYD", 0, 1);
					UNK_0x6DF7BF67E86AAE86(Local_64[3 /*10*/], bLocal_394);
				}
			}
			if (UNK_0x3148AE92ED70DC30("Trevor", 0))
			{
				iLocal_446 = 1;
			}
			if (UNK_0x3148AE92ED70DC30("Floyd", 0))
			{
				iLocal_447 = 1;
			}
			if (UNK_0x3148AE92ED70DC30("DockHeist_truck", 0))
			{
				UNK_0x0725C805005717D6(Local_55[2 /*2*/], 1, 0, 0);
				UNK_0x05CA0E7946B27A19(Local_55[2 /*2*/], 1);
				iLocal_448 = 1;
			}
			if (UNK_0x3148AE92ED70DC30("DockHeist_trailer", 0))
			{
				UNK_0x0725C805005717D6(Local_55[1 /*2*/], 1, 0, 0);
				iLocal_451 = 1;
			}
			if (UNK_0x3148AE92ED70DC30("submarine", 0))
			{
				iLocal_449 = 1;
			}
			if (UNK_0x3148AE92ED70DC30("sub_cover", 0))
			{
				iLocal_450 = 1;
			}
			else if (!UNK_0xC844350D5D58C99A(Local_169[4 /*2*/]))
			{
				if (UNK_0xC844350D5D58C99A(UNK_0x6450C2A9FBA3C3BF("sub_cover", joaat("PROP_SUB_COVER_01"))))
				{
					Local_169[4 /*2*/] = UNK_0x486F67509A82DB2D(UNK_0x6450C2A9FBA3C3BF("sub_cover", joaat("PROP_SUB_COVER_01")));
				}
			}
			if (UNK_0x1D3C627D3574B327(Local_55[2 /*2*/], &iVar0, &uVar1))
			{
				if (iVar0 == 0)
				{
					if (UNK_0x8F677B1F58B4741C() >= 14200)
					{
						UNK_0x0882E3DC0C991680(Local_55[2 /*2*/], 3);
					}
				}
			}
			if (((((iLocal_446 && iLocal_447) && iLocal_448) && iLocal_449) && iLocal_450) && iLocal_451)
			{
				if (UNK_0x0F1CCD77290EE12F() || UNK_0x8A83E339B374E53A(Local_64[3 /*10*/]))
				{
					UNK_0xF821F915BC24D246(Local_64[3 /*10*/], Local_55[2 /*2*/], false);
					UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), Local_55[2 /*2*/], -1);
					UNK_0xE6F7063ADA854762(Local_55[0 /*2*/], Local_55[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
					UNK_0x05EC10F460C3A4AF(Local_55[0 /*2*/], 0);
					UNK_0x05CA0E7946B27A19(Local_55[0 /*2*/], 1);
					UNK_0x71EDC33E5A423750(Local_55[0 /*2*/], 10);
					UNK_0x56FDC9ADE35F7DB0(Local_55[0 /*2*/], false, true, 0);
					UNK_0x0882E3DC0C991680(Local_55[0 /*2*/], 1);
					UNK_0x3E5CE368CD085FFA(Local_55[0 /*2*/], 0);
					UNK_0x9F528B1B53FBC5D9(Local_169[4 /*2*/], Local_55[1 /*2*/], -1, vLocal_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					Local_169[5 /*2*/] = UNK_0x7707E48765093646(joaat("PROP_TARP_STRAP"), -332.8449f, -2622.157f, 8.7838f, true, true, false);
					UNK_0x9F528B1B53FBC5D9(Local_169[5 /*2*/], Local_55[1 /*2*/], -1, vLocal_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					func_197(1, 0, 0, 3000, 0);
					func_196(&uLocal_460);
					iLocal_2104++;
				}
			}
			break;
		case 7:
			func_195(2);
			iLocal_2104 = 0;
			break;
	}
	if (UNK_0xE4EDC4B0E92C078B(Local_188.f_5))
	{
		UNK_0x661342B9651D16E2(Local_188.f_5, false);
	}
	if (func_107(UNK_0x16F2683693E537C9()) && func_107(Local_55[0 /*2*/]))
	{
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 324.7653f, -2974.495f, -1f, 1) > 2500f)
		{
			func_93(9);
		}
	}
}

int func_195(int iParam0)
{
	if (iLocal_2102 == 0)
	{
		iLocal_2105 = iParam0;
		iLocal_2102 = 1;
		return 1;
	}
	return 0;
}

void func_196(var uParam0)
{
	if (uParam0->f_860)
	{
		if (uParam0->f_860.f_1)
		{
			UNK_0x29D7581AEF4440C2();
			func_90(&(uParam0->f_860));
		}
		else
		{
			uParam0->f_860.f_2 = 1;
			uParam0->f_982 = 1;
		}
	}
}

void func_197(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	UNK_0xBFE31971E49FA500(1);
	UNK_0x8BCB70EB440DED83(1);
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), bParam0, bParam4);
	UNK_0xB3A1B75CB59FEB56(bParam1, bParam2, iParam3, 1, 0, 0);
	if (!bParam1)
	{
		UNK_0x5CAFA5DD13658DFE(0);
	}
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x3E5CE368CD085FFA(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 1);
	}
}

void func_198(int iParam0)
{
	iLocal_446 = iParam0;
	iLocal_447 = iParam0;
	iLocal_448 = iParam0;
	iLocal_450 = iParam0;
	iLocal_449 = iParam0;
	iLocal_451 = iParam0;
}

bool func_199()
{
	bool bVar0;

	switch (iLocal_410)
	{
		case 0:
			func_208();
			UNK_0xA47B46945FF6DE74(Local_55[0 /*2*/], vLocal_411, 1, 0, 0, 1);
			UNK_0xD8F6A53F4799FAFE(Local_55[0 /*2*/], bLocal_414);
			UNK_0x1E9649458B15960F(Local_55[0 /*2*/], true);
			iLocal_380 = UNK_0xC1879030EB463216("scr_pls_sub_water_drips", Local_55[0 /*2*/], 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
			UNK_0x9AB5B84DE011D632(iLocal_380, "flow", 1f, 0);
			UNK_0xAE1670DD12E839C3("dhp1_mcs_1", 8);
			if (bLocal_457)
			{
				UNK_0x7B1292B738DF9FAF();
			}
			if (UNK_0xD8A54335F18763BA() >= 20 || UNK_0xD8A54335F18763BA() <= 7)
			{
				UNK_0x2404539258C5376B("PO1_08_sub_waterplane");
			}
			func_206(&uLocal_460, 298.9806f, -2977.643f, 6.101f, Vector(7.886f, -2964.665f, 298.5479f) - Vector(6.101f, -2977.643f, 298.9806f), 3000f, 0);
			iLocal_410++;
			break;
		case 1:
			vLocal_430 = { UNK_0x68F4C0EC296D3901(Local_169[8 /*2*/], true) };
			if (vLocal_430.z <= 1f)
			{
				UNK_0x1E9649458B15960F(Local_55[0 /*2*/], false);
				UNK_0x86F44313DFA8F00C(iLocal_444, 310.0923f, -2949.529f, 10.9528f, -20.2654f, 2.7992f, -141.6393f, 25.6f, 0, 1, 1, 2);
				UNK_0x86F44313DFA8F00C(iLocal_444, 308.3542f, -2950.972f, 10.8434f, 0.0544f, 2.7992f, -137.3849f, 25.6f, 12500, 1, 1, 2);
				UNK_0x9F528B1B53FBC5D9(Local_55[0 /*2*/], Local_169[8 /*2*/], -1, 2.47f, 0f, -1.96f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				iLocal_410++;
			}
			else
			{
				func_205(1, 2f);
			}
			break;
		case 2:
			vLocal_430 = { UNK_0x68F4C0EC296D3901(Local_169[8 /*2*/], true) };
			if (vLocal_430.z >= 12.5f)
			{
				UNK_0x86F44313DFA8F00C(iLocal_444, 356.9992f, -2984.961f, 117.2741f, -68.2497f, -0.1106f, 66.9743f, 20f, 0, 1, 1, 2);
				UNK_0x86F44313DFA8F00C(iLocal_444, 361.4758f, -2966.824f, 117.2872f, -66.6976f, -0.1106f, 84.372f, 20f, 10000, 1, 1, 2);
				fLocal_443 = UNK_0xE453CFFAFB33F506(iLocal_444);
				UNK_0xDC3CC6D1845B0567(iLocal_444, 1.8f);
				iLocal_410++;
			}
			else
			{
				func_205(0, 1f);
			}
			break;
		case 3:
			if (bLocal_424 >= 40f)
			{
				UNK_0x86F44313DFA8F00C(iLocal_444, 289.8129f, -2944.046f, 5.5715f, 17.075f, 0.1698f, -109.4507f, 38.3f, 0, 1, 1, 2);
				UNK_0x86F44313DFA8F00C(iLocal_444, 290.8941f, -2941.987f, 5.5781f, 22.5176f, 0.1698f, -128.6537f, 38.3f, 7000, 1, 1, 2);
				UNK_0xDC3CC6D1845B0567(iLocal_444, fLocal_443);
				bLocal_424 = 80f;
				UNK_0x15AFB6CBDE990FB6(Local_169[7 /*2*/], 1, true);
				UNK_0x9F528B1B53FBC5D9(Local_169[7 /*2*/], Local_169[6 /*2*/], -1, vLocal_421, 0f, 0f, bLocal_424, 0, 0, 0, 0, 2, 1);
				UNK_0x08841CDB215AE18F(Local_169[8 /*2*/], UNK_0x68E4ADDDDCD7BDDE(Local_169[7 /*2*/], vLocal_426), 0, 0, 1);
				iLocal_2110 = UNK_0x1C0640BA9A7327B3();
				iLocal_410++;
			}
			else
			{
				func_204(1, 5.5f);
			}
			break;
		case 4:
			if (bLocal_424 >= 108f)
			{
				UNK_0xE4EBD4F12E3C46F1(1f);
				UNK_0x86F44313DFA8F00C(iLocal_444, 300.0253f, -2973.253f, 5.7369f, 10.5662f, 0.1117f, 4.0913f, 22.7929f, 0, 1, 1, 2);
				UNK_0x86F44313DFA8F00C(iLocal_444, 300.0292f, -2973.294f, 6.1746f, 5.2629f, 0.1117f, 4.0913f, 22.7929f, 8000, 1, 1, 2);
				UNK_0x97271F6489B78F2D(iLocal_444, 0.25f);
				UNK_0x15AFB6CBDE990FB6(Local_169[7 /*2*/], 1, true);
				UNK_0x9F528B1B53FBC5D9(Local_169[7 /*2*/], Local_169[6 /*2*/], -1, vLocal_421, 0f, 0f, bLocal_424, 0, 0, 0, 0, 2, 1);
				UNK_0x08841CDB215AE18F(Local_169[8 /*2*/], UNK_0x68E4ADDDDCD7BDDE(Local_169[7 /*2*/], vLocal_426), 0, 0, 1);
				if (UNK_0x83A8177D302E1A7E(iLocal_380))
				{
					UNK_0xF7E25143642732EA(iLocal_380, 0);
				}
				iLocal_410++;
			}
			else
			{
				bVar0 = (1f - func_203((SYSTEM::TO_FLOAT((UNK_0x1C0640BA9A7327B3() - iLocal_2110 + 1500)) / 3000f), 0f, 1f));
				UNK_0x9AB5B84DE011D632(iLocal_380, "flow", bVar0, 0);
				func_204(1, 5.5f);
			}
			break;
		case 5:
			UNK_0xE4EBD4F12E3C46F1(1f);
			vLocal_430 = { UNK_0x68F4C0EC296D3901(Local_169[8 /*2*/], true) };
			if (vLocal_430.z <= 11f)
			{
				UNK_0x15AFB6CBDE990FB6(Local_55[0 /*2*/], 1, true);
				iLocal_410++;
			}
			else
			{
				func_205(1, 1f);
			}
			break;
		case 6:
			if (UNK_0xE608C809F9416F00(Local_55[0 /*2*/]))
			{
				iLocal_2110 = UNK_0x1C0640BA9A7327B3() + 1000;
				iLocal_410++;
			}
			break;
		case 7:
			if (UNK_0x1C0640BA9A7327B3() > iLocal_2110)
			{
				UNK_0x1E9649458B15960F(Local_169[8 /*2*/], true);
				iLocal_410++;
			}
			else
			{
				func_204(0, 4f);
				func_205(0, 1f);
			}
			break;
		case 8:
			func_202(&uLocal_460);
			return true;
	}
	if (UNK_0x0F1CCD77290EE12F())
	{
		if (iLocal_410 > 0 && iLocal_410 < 5)
		{
			if (func_200(1000))
			{
				UNK_0x53491B90E4FD0E56(800);
			}
		}
	}
	else if (UNK_0x757EF87A33649210())
	{
		if (UNK_0x83A8177D302E1A7E(iLocal_380))
		{
			UNK_0xF7E25143642732EA(iLocal_380, 0);
		}
		UNK_0xD7AD2803AD9697F7(UNK_0x68F4C0EC296D3901(Local_55[0 /*2*/], true), 30f);
		iLocal_2108 = 2;
		bLocal_2107 = true;
	}
	return false;
}

bool func_200(int iParam0)
{
	if (UNK_0x0F1CCD77290EE12F())
	{
		if ((UNK_0x1C0640BA9A7327B3() - Global_28) > iParam0)
		{
			Global_27 = UNK_0x1C0640BA9A7327B3();
		}
		Global_28 = UNK_0x1C0640BA9A7327B3();
		if ((UNK_0x1C0640BA9A7327B3() - Global_27) > iParam0)
		{
			if (func_201())
			{
				Global_27 = UNK_0x1C0640BA9A7327B3();
				return true;
			}
		}
	}
	return false;
}

bool func_201()
{
	if (UNK_0x798A3F1296751F46())
	{
		return false;
	}
	if (UNK_0xBFC0798A6E3417F9(0, 18) || UNK_0xBFC0798A6E3417F9(2, 18))
	{
		return true;
	}
	return false;
}

void func_202(var uParam0)
{
	if (UNK_0xEB880D98B5988D0C())
	{
		UNK_0x486B4ADE317F0689();
		func_90(&(uParam0->f_868));
	}
}

float func_203(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_204(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		bLocal_424 = (bLocal_424 + (fParam1 * SYSTEM::TIMESTEP()));
	}
	else
	{
		bLocal_424 = (bLocal_424 - (fParam1 * SYSTEM::TIMESTEP()));
	}
	UNK_0x15AFB6CBDE990FB6(Local_169[7 /*2*/], 1, true);
	UNK_0x9F528B1B53FBC5D9(Local_169[7 /*2*/], Local_169[6 /*2*/], -1, vLocal_421, 0f, 0f, bLocal_424, 0, 0, 0, 0, 2, 1);
	UNK_0x08841CDB215AE18F(Local_169[8 /*2*/], UNK_0x68E4ADDDDCD7BDDE(Local_169[7 /*2*/], vLocal_426), 0, 0, 1);
}

void func_205(bool bParam0, float fParam1)
{
	if (bParam0)
	{
		vLocal_426.f_2 = (vLocal_426.z - (fParam1 * SYSTEM::TIMESTEP()));
	}
	else
	{
		vLocal_426.f_2 = (vLocal_426.z + (fParam1 * SYSTEM::TIMESTEP()));
	}
	UNK_0x08841CDB215AE18F(Local_169[8 /*2*/], UNK_0x68E4ADDDDCD7BDDE(Local_169[7 /*2*/], vLocal_426), 0, 0, 1);
}

int func_206(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8)
{
	if (func_207(vParam1) || func_207(vParam4))
	{
		return 0;
	}
	if (uParam0->f_868)
	{
		if ((func_95(uParam0->f_868.f_4, vParam1, 0) && func_95(uParam0->f_868.f_7, vParam4, 0)) && uParam0->f_868.f_10 == fParam7)
		{
			uParam0->f_868.f_2 = 0;
			if (!uParam0->f_868.f_1)
			{
				uParam0->f_982 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		UNK_0xD67D6A3F0D653D93(vParam1, vParam4, fParam7, iParam8);
		uParam0->f_868 = 1;
		uParam0->f_868.f_3 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_868.f_4 = { vParam1 };
		uParam0->f_868.f_7 = { vParam4 };
		uParam0->f_868.f_10 = fParam7;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

bool func_207(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_208()
{
	if (bLocal_383)
	{
		UNK_0xBCD4D622B825D37C(&(Local_145[0 /*5*/]));
		UNK_0xBCD4D622B825D37C(&(Local_145[1 /*5*/]));
		UNK_0xBCD4D622B825D37C(&(Local_145[2 /*5*/]));
		UNK_0xBCD4D622B825D37C(&(Local_145[3 /*5*/]));
		bLocal_383 = false;
	}
}

void func_209(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	UNK_0xBFE31971E49FA500(0);
	UNK_0x8BCB70EB440DED83(0);
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), bParam0, bParam8);
	UNK_0x790015DC92C918E2();
	UNK_0xA37A90C62806D848(1);
	UNK_0xB3A1B75CB59FEB56(bParam4, bParam5, iParam7, 1, 0, 0);
	if (bParam6)
	{
		UNK_0x679C321F8CAA2CFA(vParam1, 500f, 0);
	}
	UNK_0x7800CEC090C01D4D(vParam1, 300f);
	if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
	{
		UNK_0x3E5CE368CD085FFA(UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0);
	}
	if (bParam9)
	{
		func_210(0);
	}
}

void func_210(int iParam0)
{
	if (func_214())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_213())
		{
			func_211(1, 1);
		}
		else
		{
			func_211(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		UNK_0x5D96D8530B3D0904(&Global_7357, 16);
	}
	if (UNK_0x1EE04CEA36EF313B())
	{
		UNK_0x5CEB4DB888A62073(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&Global_7356, 30);
	}
	else
	{
		UNK_0x0674E58A79778E99(&Global_7356, 30);
	}
	if (!func_21())
	{
		Global_19486.f_1 = 3;
	}
}

void func_211(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_212(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				UNK_0x1CFAC524932A967E(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			UNK_0x39F06A2B18483C68(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			UNK_0x39F06A2B18483C68(Global_19423);
		}
		else
		{
			UNK_0x39F06A2B18483C68(Global_19414);
		}
	}
}

bool func_212(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (UNK_0xEAE0D21A50E6C7F4(Global_7356, 14))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (UNK_0x8A22C4C08282BF26(joaat("CELLPHONE_FLASHHAND")) > 0)
	{
		return true;
	}
	if (Global_19486.f_1 > 3)
	{
		return true;
	}
	return false;
}

bool func_213()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_214()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_215(bool bParam0, int iParam1)
{
	int iVar0;

	if (Global_61520)
	{
	}
	Global_61520 = 0;
	if (bParam0)
	{
		Global_61521 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_61737[Global_73608[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_73608[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_73608[iVar0 /*9*/] > 0)
			{
				if (Global_73608[iVar0 /*9*/] == iParam1)
				{
					Global_73608[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_216(bool bParam0, bool bParam1)
{
	if (UNK_0xEAE0D21A50E6C7F4(Global_30926, bParam0))
	{
		if (!bParam1)
		{
			UNK_0x0674E58A79778E99(&Global_30926, bParam0);
			StringCopy(&(Global_30927[bParam0 /*6*/]), "NULL", 24);
			Global_30982[bParam0] = bParam1;
		}
	}
}

void func_217(bool bParam0, bool bParam1)
{
	func_42(bParam0, bParam1, 0);
}

bool func_218(bool bParam0, bool bParam1)
{
	if (UNK_0xC844350D5D58C99A(bParam0) && !UNK_0x437347B10A200C4B(bParam0, 0))
	{
		if (UNK_0xC844350D5D58C99A(bParam1) && !UNK_0x437347B10A200C4B(bParam1, 0))
		{
			if (UNK_0x82CCEAB29E9451DD(bParam0, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_219(bool bParam0)
{
	UNK_0xCECE25C7ECD44603(bParam0);
	return UNK_0xE3789B9938DCEAE8(0);
}

void func_220(bool bParam0, int iParam1)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_221(var uParam0, bool bParam1)
{
	int iVar0;

	if (!UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_273)
		{
			if (uParam0->f_273[iVar0 /*5*/])
			{
				if (UNK_0x7F8A39872A07D2CE(uParam0->f_273[iVar0 /*5*/].f_4, bParam1))
				{
					if (uParam0->f_273[iVar0 /*5*/].f_1)
					{
						UNK_0x8D17794CE3273D70(bParam1);
						func_90(&(uParam0->f_273[iVar0 /*5*/]));
						return;
					}
					else
					{
						uParam0->f_273[iVar0 /*5*/].f_2 = 1;
						uParam0->f_982 = 1;
						return;
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_222()
{
	if (!UNK_0xC844350D5D58C99A(Local_169[6 /*2*/]))
	{
		Local_169[6 /*2*/] = UNK_0x7707E48765093646(bLocal_415, vLocal_416, true, true, false);
		UNK_0xA47B46945FF6DE74(Local_169[6 /*2*/], vLocal_416, 1, 0, 0, 1);
		UNK_0xD8F6A53F4799FAFE(Local_169[6 /*2*/], bLocal_419);
		UNK_0x1E9649458B15960F(Local_169[6 /*2*/], true);
	}
	if (!UNK_0xC844350D5D58C99A(Local_169[7 /*2*/]))
	{
		Local_169[7 /*2*/] = UNK_0x7707E48765093646(bLocal_420, UNK_0x68E4ADDDDCD7BDDE(Local_169[6 /*2*/], vLocal_421), true, true, false);
	}
	if (!UNK_0x50B5F6F3C29E9380(Local_169[7 /*2*/], Local_169[6 /*2*/]))
	{
		UNK_0x9F528B1B53FBC5D9(Local_169[7 /*2*/], Local_169[6 /*2*/], -1, vLocal_421, 0f, 0f, bLocal_424, 0, 0, 0, 0, 2, 1);
	}
	if (!UNK_0xC844350D5D58C99A(Local_169[8 /*2*/]))
	{
		Local_169[8 /*2*/] = UNK_0x7707E48765093646(bLocal_425, UNK_0x68E4ADDDDCD7BDDE(Local_169[7 /*2*/], vLocal_426), true, true, false);
		UNK_0x120A395B0ECB8EA5(Local_169[8 /*2*/], false);
		UNK_0x9F528B1B53FBC5D9(Local_169[8 /*2*/], Local_169[7 /*2*/], -1, vLocal_426, 0f, 0f, bLocal_429, 0, 0, 0, 0, 2, 1);
		UNK_0x15AFB6CBDE990FB6(Local_169[8 /*2*/], 1, false);
		UNK_0x1E9649458B15960F(Local_169[8 /*2*/], true);
	}
	if (!bLocal_384)
	{
		if (UNK_0x32B8283A77B4A240(Local_169[7 /*2*/]) && UNK_0x32B8283A77B4A240(Local_169[8 /*2*/]))
		{
			iLocal_439 = UNK_0x554477F017313FFD(UNK_0x68E4ADDDDCD7BDDE(Local_169[7 /*2*/], vLocal_433), 0f, 0f, 0f, 70f, 0, -1f, 4f, 1.4f, 0, 0, 1, 1f, 0, 0);
			UNK_0xD302EBC2E2F714C5(iLocal_439, 1);
			UNK_0x11E7EF0C53A0210C(iLocal_439, 2);
			UNK_0x3AD51BF3C6832AAD(&iLocal_439, 0);
			UNK_0xE8F21A278C1048BF(iLocal_439, Local_169[7 /*2*/], Local_169[8 /*2*/], UNK_0x68E4ADDDDCD7BDDE(Local_169[7 /*2*/], vLocal_433), UNK_0x68E4ADDDDCD7BDDE(Local_169[8 /*2*/], vLocal_436), 70f, 0, 0, 0, 0);
			bLocal_384 = true;
			return true;
		}
		if (!UNK_0x32B8283A77B4A240(Local_169[7 /*2*/]))
		{
		}
		if (!UNK_0x32B8283A77B4A240(Local_169[8 /*2*/]))
		{
		}
	}
	return false;
}

void func_223(bool bParam0, int iParam1)
{
	UNK_0x5D96D8530B3D0904(&Global_30926, bParam0);
	StringCopy(&(Global_30927[bParam0 /*6*/]), UNK_0xBB0808A181D4745C(), 24);
	Global_30982[bParam0] = iParam1;
}

void func_224(var uParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = bParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!UNK_0xEB6A8945D1AC98A1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				UNK_0xA245D14CC59CDD36(bParam2, 0);
			}
			else
			{
				UNK_0xA245D14CC59CDD36(bParam2, 1);
			}
		}
		if (!UNK_0xEB6A8945D1AC98A1(bParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				UNK_0x971EF1DE410C56CF(bParam2, 0);
			}
			else
			{
				UNK_0x971EF1DE410C56CF(bParam2, 1);
			}
		}
	}
}

void func_225(int iParam0, bool bParam1)
{
	int iVar0;

	Global_61522 = iParam0;
	if (!Global_61520)
	{
		Global_61520 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73607)
		{
			if (Global_73608[iVar0 /*9*/] == iParam0)
			{
				Global_73608[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

int func_226(bool bParam0, vector3 vParam1, vector3 vParam4, int iParam7, var uParam8, char* sParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	return func_49(bParam0, vParam1, vParam4, func_87(), func_87(), iParam7, 5, 0, 0, 0, uParam8, sParam9, func_227(), func_227(), func_227(), func_227(), iParam10, 0, bParam12, bParam11, 0, bParam13, bParam14, bParam15, 0, 0, 0, 1, 1065353216 /* Float: 1f */);
}

bool func_227()
{
	var uVar0;

	return uVar0;
}

void func_228(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (UNK_0x7F8A39872A07D2CE(uParam0->f_737[iVar0 /*5*/].f_4, bParam1))
			{
				if (uParam0->f_737[iVar0 /*5*/].f_1)
				{
					UNK_0x42740B44BA8D7B43(bParam1);
					func_90(&(uParam0->f_737[iVar0 /*5*/]));
					return;
				}
				else
				{
					uParam0->f_737[iVar0 /*5*/].f_2 = 1;
					uParam0->f_982 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_229()
{
	bool bVar0;
	vector3 vVar1;

	switch (iLocal_2104)
	{
		case 0:
			if (UNK_0x757EF87A33649210())
			{
				UNK_0x82E51BCA72537B6C(800);
			}
			if (func_107(Local_55[0 /*2*/]))
			{
				if (!UNK_0xE4EDC4B0E92C078B(Local_55[0 /*2*/].f_1))
				{
					Local_55[0 /*2*/].f_1 = func_38(Local_55[0 /*2*/], 0, 0);
				}
				vLocal_166 = { UNK_0x6CAADC590F8E4F66(Local_55[0 /*2*/]) };
			}
			if (UNK_0xC844350D5D58C99A(Local_169[2 /*2*/]) && !UNK_0xE4EDC4B0E92C078B(iLocal_378))
			{
				iLocal_378 = func_277(Local_169[2 /*2*/]);
			}
			UNK_0xDC5B2F9D0CCE3A10(iLocal_378, "SUBBTN_LABEL");
			if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
			{
				UNK_0xC92DB9682A650680("DHP1_VEHICLE_ARRIVE");
			}
			else
			{
				UNK_0xC92DB9682A650680("DHP1_START");
			}
			if (func_107(Local_64[4 /*10*/]))
			{
				UNK_0x11AD11297DC58CC7(Local_64[4 /*10*/], true);
				UNK_0x8685456FA9090367(Local_64[4 /*10*/], 0);
			}
			func_276(&uLocal_460, bLocal_51);
			func_276(&uLocal_460, "MISSHEISTDOCKSPREP1HOLD_CELLPHONE");
			func_275(&uLocal_460, "PORT_OF_LS_PREP_1");
			func_35("dkp1_sub", 7500, 1);
			iLocal_399 = 0;
			iLocal_400 = 0;
			iLocal_401 = 0;
			iLocal_403 = UNK_0x1C0640BA9A7327B3();
			bLocal_404 = false;
			bLocal_388 = false;
			bLocal_398 = false;
			if (iLocal_2113[0] == -1)
			{
				iLocal_2113[0] = UNK_0xD68EA767274B7444();
			}
			if (iLocal_2113[1] == -1)
			{
				iLocal_2113[1] = UNK_0xD68EA767274B7444();
			}
			iLocal_2104++;
			break;
		case 1:
			if (bLocal_383)
			{
				if (((!UNK_0x38F46E8B62DED0D4(&(Local_145[0 /*5*/])) && !UNK_0x38F46E8B62DED0D4(&(Local_145[1 /*5*/]))) && !UNK_0x38F46E8B62DED0D4(&(Local_145[2 /*5*/]))) && !UNK_0x38F46E8B62DED0D4(&(Local_145[3 /*5*/])))
				{
					UNK_0x8829DF6BD666E49D(Local_169[0 /*2*/]);
					UNK_0x8829DF6BD666E49D(Local_169[1 /*2*/]);
					if (func_107(Local_55[0 /*2*/]))
					{
						UNK_0xD30E2F394BD927B3(Local_55[0 /*2*/], vLocal_166);
					}
					if (UNK_0xE4EDC4B0E92C078B(iLocal_378))
					{
						UNK_0x142CC44DB769B57E(&iLocal_378);
					}
					func_271(1);
					func_88(&uLocal_460, joaat("S_M_M_SECURITY_01"));
					func_276(&uLocal_460, bLocal_49);
					UNK_0xC92DB9682A650680("DHP1_RELEASED");
					UNK_0xA37A90C62806D848(1);
					iLocal_452 = UNK_0x1C0640BA9A7327B3();
					iLocal_2104 = 4;
				}
				func_270();
				if ((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1249.106f, -3007.908f, 10.84327f, 1249.962f, -3007.837f, 8.31909f, 1.68f, 0, true, 0) && !UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1)) && !func_212(0))
				{
					if (UNK_0xBFC0798A6E3417F9(2, 51))
					{
						iLocal_444 = UNK_0xAE06CCC36C49929C(joaat("DEFAULT_SCRIPTED_CAMERA"), 1249.929f, -3010.267f, 9.590105f, 5.351202f, -1.57369f, 8.12499f, 21.33357f, 1, 2);
						UNK_0x86F44313DFA8F00C(iLocal_444, 1249.929f, -3010.267f, 9.590105f, 4.448765f, -1.5737f, 12.68005f, 21.33357f, 3500, 0, 1, 2);
						UNK_0x91F5B0244AAE6222(iLocal_444, "hand_shake", 0.3f);
						func_209(0, 1249.787f, -3008.016f, 8.52751f, 1, 0, 1, 3000, 0, 1);
						UNK_0x5745EA6329A91E29(UNK_0x16F2683693E537C9(), joaat("WEAPON_UNARMED"), true);
						UNK_0x327AAEE25F323797(UNK_0x16F2683693E537C9());
						iLocal_381 = UNK_0xE9744DB7B8CA6965(1250.01f, -3007.9f, 9.32f, 0f, 0f, 90f, 2);
						if (UNK_0x5F596B0E13677FE9(UNK_0x16F2683693E537C9()))
						{
							UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), iLocal_381, bLocal_51, "ig_1_stealth_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						else
						{
							UNK_0x915804B434753CBD(UNK_0x16F2683693E537C9(), iLocal_381, bLocal_51, "ig_1_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						UNK_0xF895E10BF4C72645(UNK_0x16F2683693E537C9(), 0, 0);
						UNK_0xA37A90C62806D848(1);
						bVar0 = UNK_0x83C1D4B63BBD91F6(1249.787f, -3008.016f, 8.52751f, 5f, false, 4);
						if (func_107(bVar0))
						{
							UNK_0xA47B46945FF6DE74(bVar0, 1250.333f, -3010.219f, 8.3191f, 1, 0, 0, 1);
							UNK_0xD8F6A53F4799FAFE(bVar0, 85.8086f);
							UNK_0xB9FD7450C0DAB575(bVar0, 1084227584 /* Float: 5f */);
						}
						UNK_0x8B4C4CA774181102(4f, 0f, 4);
						UNK_0x420FE818E70BB523(4);
						bLocal_445 = true;
						iLocal_2104++;
					}
					else if (!func_219("DKP1_BTN"))
					{
						func_269("DKP1_BTN");
					}
				}
				else if (func_219("DKP1_BTN"))
				{
					UNK_0xA37A90C62806D848(1);
				}
			}
			break;
		case 2:
			if (!UNK_0x69DF961355195C3C(iLocal_381) || UNK_0xA45992A6CE82FB43(iLocal_381) == 1f)
			{
				UNK_0xBF40D896CA4BDBE7();
				UNK_0xEB819BD1E585E9CB(-1, "SUB_RELEASE", 1260.896f, -3006.556f, 23.4213f, "DOCKS_HEIST_PREP_1_SOUNDSET", false, 0, 0);
				UNK_0x86F44313DFA8F00C(iLocal_444, 1249f, -3010.3f, 10.7f, 37.7f, 0f, -61.5f, 43.4f, 0, 1, 1, 2);
				UNK_0x86F44313DFA8F00C(iLocal_444, 1249f, -3010.3f, 10.7f, -20.1f, 0f, -48.2f, 43.4f, 1700, 2, 2, 2);
				UNK_0x97271F6489B78F2D(iLocal_444, 0.1f);
				UNK_0xDEC30C89A69FEB57(Local_145[0 /*5*/], Local_55[0 /*2*/]);
				UNK_0xDEC30C89A69FEB57(Local_145[1 /*5*/], Local_55[0 /*2*/]);
				UNK_0xDEC30C89A69FEB57(Local_145[2 /*5*/], Local_55[0 /*2*/]);
				UNK_0xDEC30C89A69FEB57(Local_145[3 /*5*/], Local_55[0 /*2*/]);
				UNK_0x8829DF6BD666E49D(Local_169[0 /*2*/]);
				UNK_0x8829DF6BD666E49D(Local_169[1 /*2*/]);
				if (func_107(Local_55[0 /*2*/]))
				{
					UNK_0xD30E2F394BD927B3(Local_55[0 /*2*/], vLocal_166);
					UNK_0xAC0C6241732E36F6(Local_55[0 /*2*/]);
				}
				iLocal_452 = UNK_0x1C0640BA9A7327B3();
				UNK_0xC92DB9682A650680("DHP1_RELEASED");
				UNK_0xA37A90C62806D848(1);
				bLocal_445 = true;
				iLocal_2104++;
			}
			else if (UNK_0x69DF961355195C3C(iLocal_381) && UNK_0xA45992A6CE82FB43(iLocal_381) >= 0.7f)
			{
				if (UNK_0xD1960163A3042274(UNK_0x16F2683693E537C9(), 713668775) != 1)
				{
					UNK_0x96167B03C5A77156(UNK_0x16F2683693E537C9(), 1252.594f, -3008.883f, 8.3191f, 1f, -1, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				}
			}
			break;
		case 3:
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_452) > 1500)
			{
				if (bLocal_445)
				{
					UNK_0x86F44313DFA8F00C(iLocal_444, 1261.7f, -3013.3f, 21.7f, -62.7f, 0f, 29.5f, 40.4f, 0, 3, 3, 2);
					UNK_0x86F44313DFA8F00C(iLocal_444, 1259.9f, -3014.1f, 21.7f, -67.7f, 0f, 16.5f, 40.4f, 4000, 3, 3, 2);
					bLocal_445 = false;
				}
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_452) > 5000 || UNK_0xBFC0798A6E3417F9(2, 201))
				{
					if (UNK_0xE4EDC4B0E92C078B(iLocal_378))
					{
						UNK_0x142CC44DB769B57E(&iLocal_378);
					}
					func_271(1);
					func_88(&uLocal_460, joaat("S_M_M_SECURITY_01"));
					func_276(&uLocal_460, bLocal_49);
					UNK_0x2FB9A57162E54BAB(0f);
					UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
					UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
					func_197(1, 0, 0, 3000, 0);
					iLocal_452 = UNK_0x1C0640BA9A7327B3();
					iLocal_2104++;
				}
			}
			break;
		case 4:
			if (!func_268())
			{
				if (func_24() == 2)
				{
					if (!func_265(func_266(0), 0) && !func_265(func_266(1), 0))
					{
						func_264(12);
						iLocal_2104++;
					}
					else if (func_265(func_266(0), 0) && !func_265(func_266(1), 0))
					{
						func_224(&uLocal_213, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
						func_224(&uLocal_213, 1, func_266(0), "MICHAEL", 0, 1);
						if (func_261(&uLocal_213, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_2", 7, 0, 0))
						{
							func_264(12);
							iLocal_2104++;
						}
					}
					else if (!func_265(func_266(0), 0) && func_265(func_266(1), 0))
					{
						func_224(&uLocal_213, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
						func_224(&uLocal_213, 2, func_266(1), "FRANKLIN", 0, 1);
						if (func_261(&uLocal_213, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_3", 7, 0, 0))
						{
							func_264(12);
							iLocal_2104++;
						}
					}
					else
					{
						func_224(&uLocal_213, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
						func_224(&uLocal_213, 1, func_266(0), "MICHAEL", 0, 1);
						func_224(&uLocal_213, 2, func_266(1), "FRANKLIN", 0, 1);
						if (func_12(&uLocal_213, "DHP1AUD", "DHP1_BUD", 7, 0, 0, 0))
						{
							func_264(12);
							iLocal_2104++;
						}
					}
				}
				else if (func_36())
				{
					func_35("DKP1_SWTCH", 7500, 1);
				}
			}
			break;
		case 5:
			vVar1 = { UNK_0x68F4C0EC296D3901(Local_55[0 /*2*/], true) };
			if (UNK_0xFC0E4F7E386C43F8(Local_55[0 /*2*/]) > 0f || vVar1.z < -0.5f)
			{
				UNK_0x7DFD82B6FD730AA4(Local_145[0 /*5*/]);
				UNK_0x7DFD82B6FD730AA4(Local_145[1 /*5*/]);
				UNK_0x7DFD82B6FD730AA4(Local_145[2 /*5*/]);
				UNK_0x7DFD82B6FD730AA4(Local_145[3 /*5*/]);
				if (iLocal_2113[0] != -1)
				{
					UNK_0x55D0A2DB35045A35(iLocal_2113[0]);
				}
				if (iLocal_2113[1] != -1)
				{
					UNK_0x55D0A2DB35045A35(iLocal_2113[1]);
				}
			}
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_55[0 /*2*/], 0))
			{
				func_230(1218.237f, -3005.128f, 4.8658f, 359.5065f, 0, 145);
				if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) > 0)
				{
					Local_64[6 /*10*/] = UNK_0x36F2404464202779(26, joaat("S_M_M_SECURITY_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, 1, true);
					UNK_0x262EF6C6306BEA6C(Local_64[6 /*10*/], joaat("WEAPON_PISTOL"), -1, false, true);
					UNK_0x4E885A246A9D983A(Local_64[6 /*10*/], 330, true);
					UNK_0xE733200EEF894A35(Local_64[6 /*10*/], 1);
					UNK_0xF82EA857DA10E0CD(&iLocal_379);
					UNK_0xDD353D0E9C789D0E(&iLocal_379);
					UNK_0x96167B03C5A77156(false, 1252.876f, -3014.035f, 8.31909f, 2f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2048, 2);
					UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
					UNK_0x75ABDC5F81978924(iLocal_379);
					UNK_0x78ADC381772E3D54(Local_64[6 /*10*/], iLocal_379);
					UNK_0xF82EA857DA10E0CD(&iLocal_379);
					Local_64[7 /*10*/] = UNK_0x36F2404464202779(26, joaat("S_M_M_SECURITY_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, 1, true);
					UNK_0x4E885A246A9D983A(Local_64[7 /*10*/], 330, true);
					UNK_0x262EF6C6306BEA6C(Local_64[7 /*10*/], joaat("WEAPON_PISTOL"), -1, false, true);
					UNK_0xE733200EEF894A35(Local_64[7 /*10*/], 1);
					UNK_0xF82EA857DA10E0CD(&iLocal_379);
					UNK_0xDD353D0E9C789D0E(&iLocal_379);
					UNK_0x96167B03C5A77156(false, 1252.056f, -3006.94f, 8.31909f, 2f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2048, 2);
					UNK_0x6C3AE6E278DB3D0E(false, UNK_0x16F2683693E537C9(), 0, 16);
					UNK_0x75ABDC5F81978924(iLocal_379);
					UNK_0x78ADC381772E3D54(Local_64[7 /*10*/], iLocal_379);
					UNK_0xF82EA857DA10E0CD(&iLocal_379);
					func_89(&uLocal_460, joaat("S_M_M_SECURITY_01"));
				}
				else
				{
					Local_64[5 /*10*/] = UNK_0x36F2404464202779(26, joaat("S_M_M_DOCKWORK_01"), 1228.929f, -3015.008f, 8.31909f, false, 1, true);
					UNK_0x11AD11297DC58CC7(Local_64[5 /*10*/], true);
					UNK_0xF82EA857DA10E0CD(&iLocal_379);
					UNK_0xDD353D0E9C789D0E(&iLocal_379);
					UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2096, 2);
					UNK_0x96167B03C5A77156(false, 1252.876f, -3014.035f, 8.31909f, 2f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
					UNK_0xC6EB89C59F2AF6B8(false, bLocal_49, "react_big_variations_g", 1.5f, -1.5f, -1, 0, false, 0, 0, 0);
					UNK_0xC6EB89C59F2AF6B8(false, bLocal_49, "react_big_variations_i", 1.5f, -1.5f, -1, 0, false, 0, 0, 0);
					UNK_0xEEB67C3D0A71A47B(false, 1252.876f, -3014.035f, 8.31909f, 300f, -1, 0, 0);
					UNK_0x75ABDC5F81978924(iLocal_379);
					UNK_0x78ADC381772E3D54(Local_64[5 /*10*/], iLocal_379);
					UNK_0xF82EA857DA10E0CD(&iLocal_379);
					func_89(&uLocal_460, joaat("S_M_M_SECURITY_01"));
				}
				if (func_107(Local_64[4 /*10*/]))
				{
					UNK_0xA3BF0AA5A2608191(Local_64[4 /*10*/]);
					UNK_0xA47B46945FF6DE74(Local_64[4 /*10*/], 1229.557f, -3002.882f, 8.31909f, 1, 0, 0, 1);
				}
				else
				{
					Local_64[4 /*10*/] = UNK_0x36F2404464202779(26, joaat("S_M_M_DOCKWORK_01"), 1229.557f, -3002.882f, 8.31909f, -99f, 1, true);
				}
				UNK_0x11AD11297DC58CC7(Local_64[4 /*10*/], true);
				UNK_0x33CE5A9E32EA10B2(Local_64[4 /*10*/], 1);
				UNK_0xF82EA857DA10E0CD(&iLocal_379);
				UNK_0xDD353D0E9C789D0E(&iLocal_379);
				UNK_0x0C8C0C840C2D1AD2(false, UNK_0x16F2683693E537C9(), -1, 2096, 2);
				UNK_0x96167B03C5A77156(false, 1252.994f, -3004.134f, 9.319f, 2f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_49, "react_big_variations_f", 8f, -1.5f, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_49, "react_big_variations_g", 1.5f, -1.5f, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_49, "react_big_variations_h", 1.5f, -1.5f, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_49, "react_big_variations_i", 1.5f, -1.5f, -1, 0, false, 0, 0, 0);
				UNK_0xC6EB89C59F2AF6B8(false, bLocal_49, "react_big_variations_f", 1.5f, -1.5f, -1, 0, false, 0, 0, 0);
				UNK_0xEEB67C3D0A71A47B(false, 1252.994f, -3004.134f, 9.319f, 300f, -1, 0, 0);
				UNK_0x75ABDC5F81978924(iLocal_379);
				UNK_0x78ADC381772E3D54(Local_64[4 /*10*/], iLocal_379);
				UNK_0xF82EA857DA10E0CD(&iLocal_379);
				iLocal_456 = UNK_0x1C0640BA9A7327B3();
				iLocal_459 = 0;
				iLocal_458 = 0;
				UNK_0xA37A90C62806D848(1);
				UNK_0xC92DB9682A650680("DHP1_SUB");
				if (UNK_0xE4EDC4B0E92C078B(Local_55[0 /*2*/].f_1))
				{
					UNK_0x142CC44DB769B57E(&(Local_55[0 /*2*/].f_1));
				}
				UNK_0xEEEE2E5FA6F78DF0(&(Local_169[3 /*2*/]));
				UNK_0xEEEE2E5FA6F78DF0(&(Local_169[0 /*2*/]));
				UNK_0xEEEE2E5FA6F78DF0(&(Local_169[1 /*2*/]));
				func_89(&uLocal_460, joaat("P_AMB_PHONE_01"));
				func_89(&uLocal_460, joaat("S_M_M_DOCKWORK_01"));
				func_89(&uLocal_460, joaat("PROP_LD_TEST_01"));
				func_89(&uLocal_460, joaat("PROP_SUB_RELEASE"));
				func_221(&uLocal_460, bLocal_51);
				UNK_0x2F3540C2227116A3("docksprep1");
				UNK_0x8B4C4CA774181102(15f, 10f, 4);
				func_195(1);
				iLocal_2104 = 0;
			}
			else if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(Local_55[0 /*2*/], true), 1) < 5f && !bLocal_388)
			{
				func_220("DKP1_CLIMB", -1);
				bLocal_388 = true;
			}
			break;
	}
	if ((!bLocal_398 && func_107(Local_55[0 /*2*/])) && UNK_0x70EED0761B82965E(Local_55[0 /*2*/]))
	{
		UNK_0xCEAA091B490F8407(-1, "SUB_SPLASH", Local_55[0 /*2*/], "DOCKS_HEIST_PREP_1_SOUNDSET", 0, 0);
		bLocal_398 = true;
	}
	if (((!bLocal_383 && UNK_0xC844350D5D58C99A(Local_169[0 /*2*/])) && UNK_0xC844350D5D58C99A(Local_169[1 /*2*/])) && func_107(Local_55[0 /*2*/]))
	{
		if (UNK_0x32B8283A77B4A240(Local_169[0 /*2*/]) && UNK_0x32B8283A77B4A240(Local_169[1 /*2*/]))
		{
			UNK_0x40D76D5B1048A2B8(Local_55[0 /*2*/]);
			Local_145[0 /*5*/] = UNK_0x554477F017313FFD(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_2109, 1, fLocal_2109, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			UNK_0xE8F21A278C1048BF(Local_145[0 /*5*/], Local_169[0 /*2*/], Local_55[0 /*2*/], UNK_0x68E4ADDDDCD7BDDE(Local_169[0 /*2*/], 0f, 0f, 0f), UNK_0x68E4ADDDDCD7BDDE(Local_55[0 /*2*/], 1.8f, 1.02f, 1.11f), fLocal_2109, 0, 0, 0, 0);
			Local_145[1 /*5*/] = UNK_0x554477F017313FFD(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_2109, 1, fLocal_2109, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			UNK_0xE8F21A278C1048BF(Local_145[1 /*5*/], Local_169[0 /*2*/], Local_55[0 /*2*/], UNK_0x68E4ADDDDCD7BDDE(Local_169[0 /*2*/], 0f, 0f, 0f), UNK_0x68E4ADDDDCD7BDDE(Local_55[0 /*2*/], -1.8f, 1.02f, 1.11f), fLocal_2109, 0, 0, 0, 0);
			Local_145[2 /*5*/] = UNK_0x554477F017313FFD(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_2109, 1, fLocal_2109, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			UNK_0xE8F21A278C1048BF(Local_145[2 /*5*/], Local_169[1 /*2*/], Local_55[0 /*2*/], UNK_0x68E4ADDDDCD7BDDE(Local_169[1 /*2*/], 0f, 0f, 0f), UNK_0x68E4ADDDDCD7BDDE(Local_55[0 /*2*/], 1.8f, -3.07f, 1.11f), fLocal_2109, 0, 0, 0, 0);
			Local_145[3 /*5*/] = UNK_0x554477F017313FFD(1260.752f, -3004.994f, 22.68315f, 0f, 0f, 0f, fLocal_2109, 1, fLocal_2109, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			UNK_0xE8F21A278C1048BF(Local_145[3 /*5*/], Local_169[1 /*2*/], Local_55[0 /*2*/], UNK_0x68E4ADDDDCD7BDDE(Local_169[1 /*2*/], 0f, 0f, 0f), UNK_0x68E4ADDDDCD7BDDE(Local_55[0 /*2*/], -1.8f, -3.07f, 1.11f), fLocal_2109, 0, 0, 0, 0);
			bLocal_383 = true;
			bLocal_385 = false;
			UNK_0xAC0C6241732E36F6(Local_55[0 /*2*/]);
			UNK_0xEF3C30F70D2ED135(Local_55[0 /*2*/], 1, 0f, 0f, 0.01f, 0, 0, 1, 0);
		}
	}
	else if (func_107(Local_55[0 /*2*/]))
	{
		if (!bLocal_385)
		{
			UNK_0xAC0C6241732E36F6(Local_55[0 /*2*/]);
			bLocal_385 = true;
		}
		UNK_0x1E9649458B15960F(Local_55[0 /*2*/], false);
		UNK_0xEF3C30F70D2ED135(Local_55[0 /*2*/], 1, 0f, 0f, 0.01f, 0, 0, 1, 0);
	}
	if (!bLocal_386)
	{
		if (UNK_0xC844350D5D58C99A(Local_169[3 /*2*/]))
		{
			if (UNK_0x32B8283A77B4A240(Local_169[3 /*2*/]))
			{
				UNK_0x9F528B1B53FBC5D9(Local_169[3 /*2*/], Local_64[4 /*10*/], UNK_0x4A089F2B762B8D33(Local_64[4 /*10*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				bLocal_386 = true;
			}
		}
	}
	if (UNK_0xC844350D5D58C99A(Local_169[3 /*2*/]) && ((func_107(Local_64[4 /*10*/]) && UNK_0xE9FDA1035CFEA94F(Local_64[4 /*10*/])) || !func_107(Local_64[4 /*10*/])))
	{
		if (func_107(Local_64[4 /*10*/]) && UNK_0xB4ECF989E2C1DAC8(Local_64[4 /*10*/], bLocal_50, "cellphone_call_listen_c", 3))
		{
			UNK_0xFB131B855F2FD560(Local_64[4 /*10*/], bLocal_50, "cellphone_call_listen_c", -8f);
		}
		if (UNK_0xBDEB2DEEF1D23A18(Local_169[3 /*2*/]))
		{
			UNK_0x15AFB6CBDE990FB6(Local_169[3 /*2*/], 1, true);
		}
	}
	if (func_24() == 2)
	{
		if (func_107(Local_55[0 /*2*/]))
		{
			UNK_0x05EC10F460C3A4AF(Local_55[0 /*2*/], 1);
		}
	}
	else if (func_107(Local_55[0 /*2*/]))
	{
		UNK_0x05EC10F460C3A4AF(Local_55[0 /*2*/], 0);
	}
}

void func_230(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	vector3 vVar0;
	float fVar3;

	if (UNK_0xC844350D5D58C99A(Global_102203.f_4))
	{
		if (UNK_0xDF1306B443CD3D15(Global_102203.f_4, 0))
		{
			if (func_260(24) != Global_102203.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_257(UNK_0x68F4C0EC296D3901(Global_102203.f_4, true), iParam5, &vVar0, &fVar3))
					{
						vParam0 = { vVar0 };
						fParam3 = fVar3;
					}
				}
				func_231(Global_102203.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

void func_231(bool bParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (UNK_0xC844350D5D58C99A(Global_75441.f_484[25]) && UNK_0xDF1306B443CD3D15(Global_75441.f_484[25], 0))
			{
				if (Global_75441.f_484[25] == bParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((UNK_0x56E1CD81AE700E98(bParam0) || UNK_0x134B62B726CEC8E6(bParam0) == joaat("BUS")) || UNK_0x134B62B726CEC8E6(bParam0) == joaat("TOURBUS"))
			{
				return;
			}
		}
		func_256(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_121(bParam0, &Var0);
		if (func_95(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { UNK_0x68F4C0EC296D3901(bParam0, true) };
			iParam4 = UNK_0xD9522BA9E27E1349(bParam0);
		}
		if (iParam5 == 24)
		{
			if (UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C()) != joaat("VEHICLE_GEN_CONTROLLER"))
			{
				Global_76429 = UNK_0x12AB0310C2281427(UNK_0xBB0808A181D4745C());
			}
		}
		func_250(iParam5, &Var0, vParam1, iParam4, func_117(bParam0));
		func_232(iParam5, bParam0, 0);
	}
}

void func_232(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_249(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 12) && !UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_75441.f_555[0 /*21*/].f_4 != UNK_0x134B62B726CEC8E6(bParam1))
		{
			return;
		}
	}
	if (Global_76348 != -1 && Global_76348 != iParam0)
	{
		return;
	}
	if (UNK_0xC844350D5D58C99A(bParam1))
	{
		if (UNK_0xDF1306B443CD3D15(bParam1, 0))
		{
			if (!UNK_0xAF6690C489CC6203(bParam1))
			{
				UNK_0x73270B3C9CC833FD(bParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_111638.f_32744.f_4801 = func_171();
			}
			if (bParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					bVar0 = func_260(iParam0);
					if ((UNK_0xC844350D5D58C99A(bVar0) && UNK_0xDF1306B443CD3D15(bVar0, 0)) && bParam1 != bVar0)
					{
						func_233(bVar0, 145);
					}
				}
				Global_76347 = bParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_233(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_234(bParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		bVar0 = UNK_0xA30B8362589C124A(bParam0, -1, 0);
		if (!UNK_0xC844350D5D58C99A(bVar0))
		{
			bVar0 = UNK_0xB0326EA5AFB4EFA7(bParam0, -1);
		}
		if (UNK_0xC844350D5D58C99A(bVar0) && !UNK_0xEB6A8945D1AC98A1(bVar0))
		{
			if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_ZERO"))
			{
				iParam1 = 0;
			}
			else if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_ONE"))
			{
				iParam1 = 1;
			}
			else if (UNK_0x134B62B726CEC8E6(bVar0) == joaat("PLAYER_TWO"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111638.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (UNK_0x134B62B726CEC8E6(bParam0) == Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!UNK_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (UNK_0x7F8A39872A07D2CE(UNK_0x7888A5D2621AAF2D(bParam0), &(Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111638.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111638.f_32744.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (UNK_0x134B62B726CEC8E6(bParam0) == Global_111638.f_32744.f_5600[iVar1 /*78*/].f_66)
		{
			if (!UNK_0xEA6BC48857E0AC4C(&(Global_111638.f_32744.f_5600[iVar1 /*78*/].f_1)))
			{
				if (UNK_0x7F8A39872A07D2CE(UNK_0x7888A5D2621AAF2D(bParam0), &(Global_111638.f_32744.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111638.f_32744.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111638.f_32744.f_5590 = iParam1;
	Global_76346 = bParam0;
	Global_111638.f_32744.f_5588 = 1;
	func_121(bParam0, &(Global_111638.f_32744.f_5510));
}

bool func_234(bool bParam0)
{
	if ((((((((((!UNK_0xC844350D5D58C99A(bParam0) || !UNK_0xDF1306B443CD3D15(bParam0, 0)) || func_127(bParam0, 0, 0)) || func_127(bParam0, 1, 0)) || func_127(bParam0, 2, 0)) || func_117(bParam0) != 145) || func_248(bParam0)) || func_247(bParam0)) || func_246(bParam0)) || func_245(bParam0)) || !func_235(UNK_0x134B62B726CEC8E6(bParam0)))
	{
		if (func_247(bParam0))
		{
		}
		if (func_247(bParam0))
		{
		}
		if (func_127(bParam0, 0, 0))
		{
		}
		if (func_127(bParam0, 1, 0))
		{
		}
		if (func_127(bParam0, 2, 0))
		{
		}
		if (func_117(bParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_235(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!func_236(bParam0, 0))
	{
		return false;
	}
	if (((UNK_0xA7082C42B8809BF2(bParam0) || UNK_0xC41A9202669A24C4(bParam0)) || UNK_0xAFB8495D36825275(bParam0)) || UNK_0xA7D7011F9888A365(bParam0))
	{
		return false;
	}
	switch (bParam0)
	{
		case joaat("BUS"):
		case joaat("STRETCH"):
		case joaat("BARRACKS"):
		case joaat("ARMYTANKER"):
		case joaat("RHINO"):
		case joaat("ARMYTRAILER"):
		case joaat("BARRACKS2"):
		case joaat("FLATBED"):
		case joaat("RIPLEY"):
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("AIRBUS"):
		case joaat("COACH"):
		case joaat("RENTALBUS"):
		case joaat("TOURBUS"):
		case joaat("FIRETRUK"):
		case joaat("PBUS"):
		case joaat("TRASH"):
		case joaat("BENSON"):
		case joaat("BOATTRAILER"):
		case joaat("BIFF"):
		case joaat("HAULER"):
		case joaat("DOCKTRAILER"):
		case joaat("PHANTOM"):
		case joaat("POUNDER"):
		case joaat("TRACTOR2"):
		case joaat("BULLDOZER"):
		case joaat("HANDLER"):
		case joaat("TIPTRUCK"):
		case joaat("CUTTER"):
		case joaat("DUMP"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("RUBBLE"):
		case joaat("SCRAP"):
		case joaat("TIPTRUCK2"):
		case joaat("CAMPER"):
		case joaat("TACO"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("JOURNEY"):
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLICEB"):
		case joaat("POLICEOLD1"):
		case joaat("POLICEOLD2"):
		case joaat("POLICET"):
		case joaat("TAXI"):
		case joaat("SUBMERSIBLE"):
		case joaat("SUBMERSIBLE2"):
		case joaat("MONSTER"):
			return false;
	}
	return true;
}

bool func_236(bool bParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	if (bParam0 == 0)
	{
		return false;
	}
	if (!UNK_0x4DAC2AD66FE0E696(bParam0))
	{
		return false;
	}
	if (((((bParam0 == joaat("DOMINATOR2") && !UNK_0x8CD06866876216F2()) || (bParam0 == joaat("BUFFALO3") && !UNK_0x8CD06866876216F2())) || (bParam0 == joaat("GAUNTLET2") && !UNK_0x8CD06866876216F2())) || bParam0 == joaat("BLIMP2")) || (bParam0 == joaat("STALION2") && !UNK_0x8CD06866876216F2()))
	{
		if (!func_244())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < UNK_0x6C7B93D0F54679BE())
		{
			if (UNK_0x5A7C1EDE951FBE20(iVar0, &Var1))
			{
				if (bParam0 == Var1.f_1)
				{
					if (UNK_0x232048AB4B0E0259(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam0 == joaat("BLIMP"))
	{
		if ((((!func_243() && !func_242()) && !func_241()) && !func_240()) && !func_244())
		{
			return false;
		}
	}
	if ((bParam0 == joaat("HOTKNIFE") || bParam0 == joaat("CARBONRS")) || bParam0 == joaat("KHAMELION"))
	{
		if ((UNK_0xDC30EF462887322E() || UNK_0x0EFF6B4415DAF4A1()) || UNK_0x33A494591F2C1975())
		{
		}
		else if (!func_241())
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!func_239(bParam0))
		{
			return false;
		}
	}
	if (!func_237(bParam0))
	{
		return false;
	}
	return true;
}

bool func_237(bool bParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_238())
	{
		return true;
	}
	UNK_0xC02A8E2FDF7A5FB8(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return true;
	}
	switch (bParam0)
	{
		case joaat("DUNE4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		case joaat("VOLTIC2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		case joaat("RUINER2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		case joaat("PHANTOM2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		case joaat("TECHNICAL2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		case joaat("BOXVILLE5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		case joaat("WASTELANDER"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		case joaat("BLAZER5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		default:
			return true;
	}
	if (!UNK_0x437ABF4F514F6471(&cVar2))
	{
		return false;
	}
	return true;
}

bool func_238()
{
	if (UNK_0x0EFF6B4415DAF4A1())
	{
		return UNK_0x696DDD27ECE4E47C();
	}
	return false;
}

bool func_239(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (Global_2513258)
	{
		return true;
	}
	iVar0 = 1;
	iVar1 = UNK_0xDD0E7998AE8AD485();
	if (bParam0 == joaat("BTYPE3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("FACTION3"))
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VIRGO3") || bParam0 == joaat("VIRGO2"))
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SABREGT2"))
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORNADO5"))
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MINIVAN2"))
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEVEN70"))
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PFISTER811"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("BF400"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BRIOSO"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CONTENDER"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LE7B"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OMNIS"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPHYTRUCK"))
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPHYTRUCK2"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TROPOS"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GARGOYLE"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TAMPA2"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TYRUS"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SHEAVA"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LYNX"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STALION2"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BUFFALO3"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("DEFILER"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ESSKEY"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AVARUS"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VORTEX"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SHOTARO"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHIMERA"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAPTOR"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DAEMON2"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER4"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORNADO6"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("YOUGA2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGGIO3"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGGIO"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BAGGER"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SANCTUS"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MANCHEZ"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RATBIKE"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("VOLTIC2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RUINER2"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DUNE4"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DUNE5"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PHANTOM2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("WASTELANDER"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER5"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET3"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DIABLOUS"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELEGY"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELEGY2"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FCR"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FCR2"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTB"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NERO"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NERO2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PENETRATOR"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SPECTER"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SPECTER2"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TEMPESTA"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("GP1"))
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("INFERNUS2"))
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RUSTON"))
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TURISMO2"))
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("XA21"))
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHEETAH2"))
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TORERO"))
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VAGNER"))
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ARDENT"))
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MOGUL"))
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ROGUE"))
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STARLING"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEABREEZE"))
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TULA"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PYRO"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MOLOTOK"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NOKOTA"))
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HUNTER"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HAVOK"))
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HOWARD"))
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CYCLONE"))
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VISIONE"))
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VIGILANTE"))
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RETINUE"))
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("DELUXO"))
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STROMBERG"))
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RIOT2"))
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHERNOBOG"))
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("KHANJALI"))
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AKULA"))
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("THRUSTER"))
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BARRAGE"))
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VOLATOL"))
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET4"))
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("NEON"))
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STREITER"))
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SENTINEL3"))
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("YOSEMITE"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SC1"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("AUTARCH"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("GT500"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HUSTLER"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("REVOLTER"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PARIAH"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RAIDEN"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SAVESTRA"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RIATA"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HERMES"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("COMET5"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("Z190"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VISERIS"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("KAMACHO"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("GB200"))
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FAGALOA"))
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ELLIE"))
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ISSI3"))
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MICHELLI"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FLASHGT"))
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("HOTRING"))
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TEZERACT"))
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TYRANT"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DOMINATOR3"))
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TAIPAN"))
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ENTITY2"))
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("JESTER3"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CHEBUREK"))
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CARACARA"))
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SEASPARROW"))
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("TERBYTE"))
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PBUS2"))
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MULE4"))
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("POUNDER2"))
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SWINGER"))
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("MENACER"))
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SCRAMJET"))
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STRIKEFORCE"))
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OPPRESSOR2"))
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("PATRIOT2"))
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STAFFORD"))
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FREECRAWLER"))
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLIMP3"))
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (bParam0 == joaat("MONSTER3"))
	{
	}
	else if (bParam0 == joaat("CERBERUS"))
	{
	}
	else if (bParam0 == joaat("CERBERUS2"))
	{
	}
	else if (bParam0 == joaat("CERBERUS3"))
	{
	}
	else if (bParam0 == joaat("BRUTUS"))
	{
	}
	else if (bParam0 == joaat("BRUTUS2"))
	{
	}
	else if (bParam0 == joaat("BRUTUS3"))
	{
	}
	else if (bParam0 == joaat("SCARAB"))
	{
	}
	else if (bParam0 == joaat("SCARAB2"))
	{
	}
	else if (bParam0 == joaat("SCARAB3"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (bParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (bParam0 == joaat("ZR380"))
	{
	}
	else if (bParam0 == joaat("ZR3802"))
	{
	}
	else if (bParam0 == joaat("ZR3803"))
	{
	}
	else if (bParam0 == joaat("IMPALER"))
	{
	}
	else if (bParam0 == joaat("DEVESTE"))
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TOROS"))
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLIQUE"))
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("ITALIGTO"))
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("DEVIANT"))
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("VAMOS"))
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("TULIP"))
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("RCBANDITO"))
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LOCUST"))
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("OUTLAW"))
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("FIRETRUK"))
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BURRITO2"))
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BOXVILLE"))
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("STOCKADE"))
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("LGUARD"))
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("BLAZER2"))
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == joaat("CLUB"))
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (bParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_240()
{
	return false;
}

bool func_241()
{
	return true;
}

bool func_242()
{
	return true;
}

bool func_243()
{
	if (UNK_0xC146D5FBD23C6954(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_244()
{
	bool bVar0;

	if (UNK_0x61D9362D70D2DD56())
	{
		if (UNK_0x999A3BFD3E9B5D2C())
		{
			if (UNK_0x5CD8D2FE4603C900())
			{
				UNK_0x6FB46C25CCB7E6D5(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &bVar0, -1);
				UNK_0x5D96D8530B3D0904(&bVar0, 2);
				UNK_0x5D96D8530B3D0904(&bVar0, 4);
				UNK_0x5D96D8530B3D0904(&bVar0, 6);
				UNK_0x5D96D8530B3D0904(&Global_25, 2);
				UNK_0x5D96D8530B3D0904(&Global_25, 4);
				UNK_0x5D96D8530B3D0904(&Global_25, 6);
				UNK_0xCDC520E5E48E63D9(joaat("SP_UNLOCK_EXCLUS_CONTENT"), bVar0, 1);
				if (UNK_0xE0DC536BD2AC0301())
				{
					bVar0 = UNK_0x0A4C9A3D51EAE31F(866);
					UNK_0x5D96D8530B3D0904(&bVar0, false);
					UNK_0x9F2BE984EBF8A0F4(bVar0);
				}
				return true;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return true;
	}
	else if (Global_150472 == 3)
	{
		return false;
	}
	if (UNK_0xE0DC536BD2AC0301())
	{
		if (UNK_0xEAE0D21A50E6C7F4(UNK_0x0A4C9A3D51EAE31F(866), false))
		{
			return true;
		}
	}
	return false;
}

bool func_245(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = UNK_0x134B62B726CEC8E6(bParam0);
	bVar1 = UNK_0x7888A5D2621AAF2D(bParam0);
	if (bVar0 == joaat("SPEEDO") && UNK_0x7F8A39872A07D2CE(bVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_236(bVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_246(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UNK_0xC844350D5D58C99A(Global_96105[iVar0]))
		{
			if (Global_96105[iVar0] == bParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_247(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(bParam0) && UNK_0xDF1306B443CD3D15(bParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (UNK_0xC844350D5D58C99A(Global_96075[iVar0]) && UNK_0xDF1306B443CD3D15(Global_96075[iVar0], 0))
			{
				if (Global_96075[iVar0] == bParam0 && UNK_0x134B62B726CEC8E6(Global_96075[iVar0]) == UNK_0x134B62B726CEC8E6(bParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_248(bool bParam0)
{
	int iVar0;

	if (UNK_0xC844350D5D58C99A(Global_75441.f_484[24]))
	{
		if (bParam0 == Global_75441.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (bParam0 == Global_75441.f_484[iVar0])
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_249(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_119(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_119(0, 1);
			uParam0->f_12 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_119(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_119(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_119(1, 1);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_119(1, 2);
			uParam0->f_12 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 19);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_119(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_119(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_119(2, 1);
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 20);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("SCORCHER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("SEASHARK");
			iVar0 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("DUSTER");
			iVar0 = 1;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			break;
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 14);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 28);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 7);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 27);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 24);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("TAILGATER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 10);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 11);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("PROPTRAILER");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("BJXL");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("VELUM");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 9);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("CARGOBOB3");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TOWTRUCK");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TRASH");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("BARRACKS");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("FIRETRUK");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("VACCA");
			iVar0 = 1;
			break;
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("SURANO");
			iVar0 = 1;
			break;
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("TORNADO2");
			iVar0 = 1;
			break;
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("SUPERD");
			iVar0 = 1;
			break;
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			uParam0->f_13 = 308;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("DINGHY");
			uParam0->f_13 = 404;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 22);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("BFINJECTION");
			iVar0 = 1;
			break;
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_244())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_244())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_13 = 401;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 13);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 2);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), true);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("BLAZER3");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("SUBMERSIBLE2");
			uParam0->f_13 = 308;
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), false);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 21);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("DUKES2");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("DUKES2");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("DODO");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("DODO");
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 30);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 23);
			UNK_0x5D96D8530B3D0904(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("MILJET") || uParam0->f_4 == joaat("BESRA")) || uParam0->f_4 == joaat("LUXOR")) || uParam0->f_4 == joaat("SHAMAL")) || uParam0->f_4 == joaat("TITAN")) || uParam0->f_4 == joaat("LUXOR2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_95(Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 19))
	{
		if (!func_95(Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (UNK_0xEAE0D21A50E6C7F4(uParam0->f_9, 20))
	{
		if (!func_95(Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

void func_250(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (func_249(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 10))
		{
			func_255(iParam0);
			func_254(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0 /*21*/].f_14 /*78*/]));
			if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 11))
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0 /*21*/].f_14] = iParam5;
			}
			else
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_111638.f_32744.f_1958[Global_75441.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_251(iParam0, 1);
		}
	}
}

void func_251(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_253(iParam0, 0))
		{
			func_252(iParam0, 1, 0);
			func_252(iParam0, 2, 0);
			func_252(iParam0, 3, 0);
			func_252(iParam0, 4, 0);
			func_252(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_252(iParam0, 0, 0);
	}
}

void func_252(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		UNK_0x5D96D8530B3D0904(&(Global_111638.f_32744[iParam0]), bParam1);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_111638.f_32744[iParam0]), bParam1);
	}
}

bool func_253(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], bParam1);
}

void func_254(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_255(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_249(&(Global_75441.f_555[0 /*21*/]), iParam0))
	{
		if (UNK_0xC844350D5D58C99A(Global_75441.f_139[iParam0]))
		{
			UNK_0x73270B3C9CC833FD(Global_75441.f_139[iParam0], true, 1);
			UNK_0x046C362CF15F1935(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_75441.f_555[0 /*21*/].f_9, 13))
		{
			func_251(iParam0, 0);
		}
	}
}

void func_256(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_255(iParam0);
	func_251(iParam0, 0);
}

bool func_257(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	iVar0 = func_258(vParam0, uParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return true;
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return true;
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return true;
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return true;
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return true;
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return true;
		default:
			break;
	}
	return false;
}

int func_258(vector3 vParam0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_93782[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_93782[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_259(iVar0) || iParam4 == 0)
				{
					fVar1 = UNK_0x0EB28750412C3A5A(vParam0, Global_93782[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_259(int iParam0)
{
	return UNK_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iParam0], false);
}

int func_260(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

int func_261(var uParam0, char* sParam1, char[4] cParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar11;

	func_34(uParam0, 145, sParam1, iParam7, iParam8, 0);
	if (iParam6 > 7)
	{
		if (iParam6 < 12)
		{
			iParam6 = 7;
		}
	}
	uVar0 = 10;
	uVar11 = 10;
	func_263(2, &uVar0, &uVar11, cParam2, sParam3, sParam4, sParam5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_262(&uVar0, &uVar11, iParam6, 0);
}

int func_262(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam2 > Global_20807)
			{
				if (bParam3 == 0)
				{
					UNK_0x5CEB4DB888A62073(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
				}
				else
				{
					func_33();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (UNK_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_32(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_31();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21801 = Global_21802;
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20424.f_370 = Global_21794;
		Global_20801 = Global_20802;
		Global_20803 = Global_20804;
		if (Global_21063 == 0)
		{
			Global_20959[0 /*6*/] = { Global_20985[0 /*6*/] };
			Global_20959[1 /*6*/] = { Global_20985[1 /*6*/] };
			Global_21011[0 /*6*/] = { Global_21037[0 /*6*/] };
			Global_21011[1 /*6*/] = { Global_21037[1 /*6*/] };
			Global_20972[0 /*6*/] = { Global_20998[0 /*6*/] };
			Global_20972[1 /*6*/] = { Global_20998[1 /*6*/] };
			Global_21024[0 /*6*/] = { Global_21050[0 /*6*/] };
			Global_21024[1 /*6*/] = { Global_21050[1 /*6*/] };
		}
		if (Global_20811)
		{
			UNK_0x0674E58A79778E99(&Global_7356, 20);
			UNK_0x0674E58A79778E99(&Global_7357, 17);
			UNK_0x0674E58A79778E99(&Global_7358, false);
			if (bParam3)
			{
				func_23();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				if (UNK_0x65851B2C8786EE74(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_22())
				{
					return 0;
				}
				if (UNK_0x869EFD0BC0868856(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x6438374572DE9B51(UNK_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (UNK_0x989FD1982F631EA3(UNK_0x16F2683693E537C9(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (Global_21063 == 0)
					{
						if (UNK_0x70EED0761B82965E(UNK_0x16F2683693E537C9()))
						{
							return 0;
						}
						if (UNK_0x2EEF020781C7E77A(UNK_0xD803B885F5E47A62()))
						{
							return 0;
						}
						if (UNK_0xFB275CE013F3A38C(UNK_0x16F2683693E537C9()))
						{
							return 0;
						}
						if (UNK_0x3114787DB5A129EF(UNK_0xD803B885F5E47A62(), 0))
						{
							return 0;
						}
					}
				}
			}
			if (func_21())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
					case 8:
						return 0;
					case 9:
						break;
					case 10:
						break;
					default:
						break;
				}
			}
			func_20();
			Global_20815 = bParam3;
		}
		Global_20807 = iParam2;
		if (Global_20801 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_20801)
			{
				StringCopy(&(Global_20424.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20424.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_19671 = 0;
		func_19();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_20807 || iParam2 == Global_20807)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_33();
	}
	return 0;
}

void func_263(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_20802 = iParam0;
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	(*uParam1)[0] = sParam3;
	(*uParam2)[0] = sParam4;
	(*uParam1)[1] = sParam5;
	(*uParam2)[1] = sParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_264(bool bParam0)
{
	UNK_0x5D96D8530B3D0904(&Global_94599, bParam0);
}

bool func_265(bool bParam0, int iParam1)
{
	bool bVar0;

	return false;
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		bVar0 = func_27(bParam0);
		if (bVar0 > 3)
		{
			return false;
		}
		if (func_266(bVar0) != bParam0)
		{
			return false;
		}
		if (iParam1 == 0)
		{
			if (bParam0 == UNK_0x16F2683693E537C9())
			{
				return false;
			}
		}
		if (UNK_0xEAE0D21A50E6C7F4(Global_94597, bVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_266(bool bParam0)
{
	if (bParam0 > 3)
	{
		return false;
	}
	if (bParam0 == func_24())
	{
		return UNK_0x16F2683693E537C9();
	}
	return Global_96222[func_267(bParam0)];
}

int func_267(bool bParam0)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	else if (bParam0 == 2)
	{
		return 2;
	}
	else if (bParam0 == 1)
	{
		return 1;
	}
	else if (bParam0 == 145)
	{
		return 3;
	}
	return 4;
}

bool func_268()
{
	if (!UNK_0x8CD06866876216F2())
	{
		return Global_96222.f_44 == 1;
	}
	return false;
}

void func_269(bool bParam0)
{
	UNK_0xB6A2CAEFEE28197D(bParam0);
	UNK_0xBAB71DDCAEBC7FDD(0, 1, true, -1);
}

void func_270()
{
	int iVar0;
	bool bVar1;

	iLocal_382 = 0;
	while (iLocal_382 < Local_145)
	{
		if (!UNK_0x38F46E8B62DED0D4(&(Local_145[iLocal_382 /*5*/])))
		{
			if (!Local_145[iLocal_382 /*5*/].f_4)
			{
				bVar1 = true;
			}
			iVar0++;
		}
		iLocal_382++;
	}
	if (bVar1)
	{
		if (((((!UNK_0x38F46E8B62DED0D4(&(Local_145[0 /*5*/])) && !UNK_0x38F46E8B62DED0D4(&(Local_145[1 /*5*/]))) && (!Local_145[0 /*5*/].f_4 || !Local_145[1 /*5*/].f_4)) || ((!UNK_0x38F46E8B62DED0D4(&(Local_145[2 /*5*/])) && !UNK_0x38F46E8B62DED0D4(&(Local_145[3 /*5*/]))) && (!Local_145[2 /*5*/].f_4 || !Local_145[3 /*5*/].f_4))) || iVar0 == 3) && iVar0 < 4)
		{
			if (iLocal_2116 > 0)
			{
				if (iLocal_2113[(iLocal_2116 - 1)] != -1)
				{
					UNK_0x55D0A2DB35045A35(iLocal_2113[(iLocal_2116 - 1)]);
				}
			}
			if (iLocal_2113[iLocal_2116] != -1)
			{
				UNK_0xEB819BD1E585E9CB(iLocal_2113[iLocal_2116], "DOCKS_HEIST_PREP_1_SUB_SWING", 1260.896f, -3006.556f, 23.4213f, false, false, 0, 0);
				iLocal_2116++;
			}
		}
		else if (iVar0 <= 2)
		{
			UNK_0xEB819BD1E585E9CB(-1, "DOCKS_HEIST_PREP_1_SUB_TILT", 1260.896f, -3006.556f, 23.4213f, false, false, 0, 0);
		}
		iLocal_382 = 0;
		while (iLocal_382 < Local_145)
		{
			if (!UNK_0x38F46E8B62DED0D4(&(Local_145[iLocal_382 /*5*/])))
			{
				if (!Local_145[iLocal_382 /*5*/].f_4)
				{
					UNK_0xEB819BD1E585E9CB(-1, "DOCKS_HEIST_PREP_1_CABLE_SNAP", 1260.896f, -3006.556f, 23.4213f, false, false, 0, 0);
				}
				Local_145[iLocal_382 /*5*/].f_4 = 1;
			}
			iLocal_382++;
		}
		if (iVar0 >= 4)
		{
			if (iLocal_2113[0] != -1)
			{
				UNK_0x55D0A2DB35045A35(iLocal_2113[0]);
			}
			if (iLocal_2113[1] != -1)
			{
				UNK_0x55D0A2DB35045A35(iLocal_2113[1]);
			}
		}
	}
}

void func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_88(&uLocal_460, joaat("SUBMERSIBLE"));
			func_88(&uLocal_460, joaat("PROP_LD_TEST_01"));
			func_88(&uLocal_460, joaat("PROP_SUB_RELEASE"));
			func_88(&uLocal_460, joaat("S_M_M_DOCKWORK_01"));
			func_276(&uLocal_460, bLocal_50);
			func_276(&uLocal_460, bLocal_51);
			func_274(&uLocal_460, "docksprep1");
			func_88(&uLocal_460, joaat("P_AMB_PHONE_01"));
			func_273(&uLocal_460);
			func_275(&uLocal_460, "PORT_OF_LS_PREP_1");
			break;
		case 1:
			func_88(&uLocal_460, joaat("SUBMERSIBLE"));
			func_88(&uLocal_460, joaat("PACKER"));
			func_88(&uLocal_460, joaat("ARMYTRAILER"));
			func_88(&uLocal_460, bLocal_415);
			func_88(&uLocal_460, bLocal_420);
			func_88(&uLocal_460, bLocal_425);
			func_272(&uLocal_460);
			func_273(&uLocal_460);
			break;
		case 2:
		case 3:
			func_88(&uLocal_460, joaat("SUBMERSIBLE"));
			func_88(&uLocal_460, joaat("PACKER"));
			func_88(&uLocal_460, joaat("ARMYTRAILER"));
			func_88(&uLocal_460, joaat("PROP_SUB_COVER_01"));
			func_88(&uLocal_460, joaat("PROP_TARP_STRAP"));
			break;
	}
}

void func_272(var uParam0)
{
	uParam0->f_860.f_2 = 0;
	if (!uParam0->f_860.f_1)
	{
		if (!uParam0->f_860)
		{
			UNK_0x9E5E60D8C63FD9D1();
			uParam0->f_860 = 1;
		}
		uParam0->f_982 = 1;
	}
}

void func_273(var uParam0)
{
	uParam0->f_864.f_2 = 0;
	if (!uParam0->f_864.f_1)
	{
		if (!uParam0->f_864)
		{
			UNK_0x8C57ADF8EFD2D9A9();
			uParam0->f_864 = 1;
		}
		uParam0->f_982 = 1;
	}
}

int func_274(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (UNK_0x7F8A39872A07D2CE(uParam0->f_374[iVar0 /*5*/].f_4, bParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		UNK_0x29398344B9E5B8A7(bParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_374[iVar1 /*5*/].f_4 = bParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_275(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (UNK_0x7F8A39872A07D2CE(uParam0->f_737[iVar0 /*5*/].f_4, bParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		UNK_0xAE317D00A5A55DF6(bParam1, 0, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_737[iVar1 /*5*/].f_4 = bParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_276(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (UNK_0xEA6BC48857E0AC4C(bParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (UNK_0x7F8A39872A07D2CE(uParam0->f_273[iVar0 /*5*/].f_4, bParam1))
			{
				uParam0->f_273[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_273[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		UNK_0x3F423BF5B8125A50(bParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = UNK_0x1C0640BA9A7327B3();
		uParam0->f_273[iVar1 /*5*/].f_4 = bParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_277(bool bParam0)
{
	return func_39(bParam0, 1, 0);
}

void func_278()
{
	bool bVar0;

	iLocal_382 = 0;
	while (iLocal_382 <= (8 - 1))
	{
		if (UNK_0xC844350D5D58C99A(Local_64[iLocal_382 /*10*/]))
		{
			if (Local_64[iLocal_382 /*10*/] != Local_64[3 /*10*/])
			{
				if (iLocal_2103 == 0)
				{
					func_293(Local_64[iLocal_382 /*10*/], &(Local_64[iLocal_382 /*10*/].f_2), -1, 0, 0, 0, -1082130432 /* Float: -1f */, 0, -1, -1, 1);
				}
				else if (UNK_0xE4EDC4B0E92C078B(Local_64[iLocal_382 /*10*/].f_2))
				{
					UNK_0x142CC44DB769B57E(&(Local_64[iLocal_382 /*10*/].f_2));
				}
			}
			if (UNK_0xEB6A8945D1AC98A1(Local_64[iLocal_382 /*10*/]))
			{
				if (Local_64[iLocal_382 /*10*/] == Local_64[3 /*10*/])
				{
					func_93(7);
				}
				func_9(&(Local_64[iLocal_382 /*10*/]), 1, 0, 1);
			}
			else if (iLocal_2103 == 2 && Local_64[iLocal_382 /*10*/] == Local_64[3 /*10*/])
			{
				if (func_10(Local_64[3 /*10*/], UNK_0x16F2683693E537C9(), 1) > 300f)
				{
					func_93(11);
				}
			}
		}
		iLocal_382++;
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (4 - 1))
	{
		if (UNK_0xC844350D5D58C99A(Local_55[iLocal_382 /*2*/]))
		{
			if (!UNK_0xDF1306B443CD3D15(Local_55[iLocal_382 /*2*/], 0))
			{
				if (Local_55[iLocal_382 /*2*/] == Local_55[0 /*2*/])
				{
					func_93(1);
				}
				else if (Local_55[iLocal_382 /*2*/] == Local_55[2 /*2*/] || Local_55[iLocal_382 /*2*/] == Local_55[1 /*2*/])
				{
					func_93(2);
				}
				else if (iLocal_382 == 3)
				{
					func_93(8);
				}
				func_292(&(Local_55[iLocal_382 /*2*/]));
			}
			else if (bLocal_392)
			{
				if (Local_55[iLocal_382 /*2*/] == Local_55[0 /*2*/] || Local_55[iLocal_382 /*2*/] == Local_55[1 /*2*/])
				{
					if (iLocal_2103 == 2)
					{
						if (UNK_0xFC0E4F7E386C43F8(Local_55[iLocal_382 /*2*/]) > 0.5f)
						{
							func_93(5);
						}
					}
				}
				if (Local_55[iLocal_382 /*2*/] == Local_55[2 /*2*/] || Local_55[iLocal_382 /*2*/] == Local_55[1 /*2*/])
				{
					if (func_291(&(Local_55[iLocal_382 /*2*/])))
					{
						func_93(3);
						func_292(&(Local_55[iLocal_382 /*2*/]));
					}
				}
				if (Local_55[iLocal_382 /*2*/] == Local_55[0 /*2*/])
				{
					if (iLocal_2103 == 1 && iLocal_2104 < 3)
					{
						if (func_291(&(Local_55[iLocal_382 /*2*/])))
						{
							func_93(4);
							func_292(&(Local_55[iLocal_382 /*2*/]));
						}
					}
				}
			}
		}
		iLocal_382++;
	}
	if (func_107(Local_55[0 /*2*/]) && func_107(UNK_0x16F2683693E537C9()))
	{
		if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(Local_55[0 /*2*/], true), 1) > 750f)
		{
			func_93(10);
		}
		else if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(Local_55[0 /*2*/], true), 1) > 700f)
		{
			if (!bLocal_389 && func_36())
			{
				func_35("DKP1_ABSUB", 7500, 1);
				bLocal_389 = true;
			}
		}
		else
		{
			bLocal_389 = false;
		}
	}
	if (func_107(UNK_0x16F2683693E537C9()))
	{
		func_284();
	}
	if (iLocal_2103 == 0 && iLocal_2104 > 0)
	{
		func_281();
	}
	if (iLocal_2103 == 0 || iLocal_2103 == 1)
	{
		if (func_107(Local_55[0 /*2*/]))
		{
			if (!bLocal_2111)
			{
				func_280(Local_55[0 /*2*/], 588);
				bLocal_2111 = true;
			}
		}
		else if (bLocal_2111)
		{
			func_280(0, 588);
			bLocal_2111 = false;
		}
	}
	else if (iLocal_2103 == 2)
	{
		if (func_107(Local_55[2 /*2*/]))
		{
			if (!bLocal_2112)
			{
				func_280(Local_55[2 /*2*/], 590);
				bLocal_2112 = true;
			}
		}
		else if (bLocal_2112)
		{
			func_280(0, 590);
			bLocal_2112 = false;
		}
	}
	if ((((UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1240.402f, -2880.396f, 8.25003f, 1240.384f, -2924.513f, 40.81909f, 28.875f, 0, true, 0) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1240.222f, -3035.469f, 16.02625f, 1240.409f, -2924.159f, 8.06909f, 28.875f, 0, true, 0)) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1240.464f, -3035.127f, 13.00698f, 1240.617f, -3057.122f, 16.97133f, 27.6875f, 0, true, 0)) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1240.537f, -2967.822f, 32.94558f, 1240.792f, -2943.657f, 10.00659f, 12.1875f, 0, true, 0)) || UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1261.525f, -3006.275f, 29.21641f, 1237.788f, -3006.826f, 12.87723f, 8.1875f, 0, true, 0))
	{
		UNK_0x3E48C1351341DC99(UNK_0x12AB0310C2281427("V_FakeBoatPO1SH2A"), 1240f, -2970f, 0, 0);
		if (UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 1))
		{
			bVar0 = UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 1);
		}
		else
		{
			bVar0 = UNK_0x16F2683693E537C9();
		}
		if ((!UNK_0xE934758D273C899A(bVar0) && !UNK_0x70EED0761B82965E(bVar0)) && (!UNK_0xC844350D5D58C99A(Local_55[0 /*2*/]) || !UNK_0x1B3D109B39CC2C89(bVar0, Local_55[0 /*2*/])))
		{
			if (!bLocal_391)
			{
				func_279(593);
				bLocal_391 = true;
			}
		}
	}
	if (!bLocal_393)
	{
		if (UNK_0xF06268E966D7C1A2(UNK_0xD803B885F5E47A62(), 0))
		{
			UNK_0x7352ACF3368DF65F("OnlyAllowScriptTriggerPoliceScanner", 1);
			UNK_0x91F2686FF85AFDF5("SCRIPTED_SCANNER_REPORT_DH_PREP_1_01", 0f);
			bLocal_393 = true;
		}
	}
	if (UNK_0x5ED715849883FAFF())
	{
		UNK_0x504A4E73F2EC2E4C(Local_55[0 /*2*/]);
	}
}

void func_279(int iParam0)
{
	bool bVar0;
	int iVar1;

	Global_61513 = 0;
	if (!Global_61737[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_73607)
	{
		if (Global_73608[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_73608[iVar1 /*9*/].f_1 = 1;
			Global_73608[iVar1 /*9*/].f_2 = 0f;
			if (Global_73608[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_280(int iParam0, int iParam1)
{
	int iVar0;

	Global_61525 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_73607)
	{
		if (iParam1 == -1 || Global_73608[iVar0 /*9*/] == iParam1)
		{
			if (Global_73608[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_73608[iVar0 /*9*/].f_6 = iParam0;
				Global_73608[iVar0 /*9*/].f_7 = 1;
				Global_73608[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_281()
{
	switch (iLocal_399)
	{
		case 0:
			if (func_107(Local_64[4 /*10*/]))
			{
				if (bLocal_404)
				{
					UNK_0xC6EB89C59F2AF6B8(Local_64[4 /*10*/], bLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, false, 0, 0, 0);
					if (UNK_0x1C2E18E9C63BEB77("docksprep1"))
					{
						UNK_0xF44B0E19CAC31C33(Local_64[4 /*10*/], "docksprep1", 0, 8, -1);
					}
					else
					{
						UNK_0x29398344B9E5B8A7("docksprep1");
					}
				}
			}
			bLocal_405 = false;
			iLocal_399 = 1;
			break;
		case 1:
			if (!bLocal_404)
			{
				if ((UNK_0x1C0640BA9A7327B3() - iLocal_403) > 2000 || UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(Local_64[4 /*10*/], true), 1) < 10f)
				{
					bLocal_404 = true;
					iLocal_399 = 0;
				}
			}
			if (UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, true, 0))
			{
				if (func_107(Local_64[4 /*10*/]))
				{
					if (UNK_0xE115347EA59F7B86(Local_64[4 /*10*/], UNK_0x16F2683693E537C9()))
					{
						UNK_0xA3BF0AA5A2608191(Local_64[4 /*10*/]);
						UNK_0x0FB22E2FED7BCC7E(Local_64[4 /*10*/]);
						func_224(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_399 = 2;
					}
					else if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(Local_64[4 /*10*/], true), 1) < 12f && UNK_0x2877A0CC456B25B0(UNK_0xD803B885F5E47A62()) > 8.5f)
					{
						UNK_0x0FB22E2FED7BCC7E(Local_64[4 /*10*/]);
						if (!func_283(Local_64[4 /*10*/], 1464580341, 1))
						{
							UNK_0x796BDF31572BB055(Local_64[4 /*10*/], UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 4000);
							UNK_0xC6EB89C59F2AF6B8(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, false, 0, 0, 0);
						}
					}
					else if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(Local_64[4 /*10*/], true), 1) < 12f && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if (!func_283(Local_64[4 /*10*/], 1464580341, 1))
						{
							UNK_0x796BDF31572BB055(Local_64[4 /*10*/], UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 4000);
							UNK_0xC6EB89C59F2AF6B8(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, false, 0, 0, 0);
						}
					}
					else if (((UNK_0xC5767C6697467830(UNK_0x16F2683693E537C9()) && (UNK_0xD8A54335F18763BA() >= 19 || UNK_0xD8A54335F18763BA() < 6)) && func_10(UNK_0x16F2683693E537C9(), Local_64[4 /*10*/], 1) < 25f) && (UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), Local_64[4 /*10*/]) || UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), Local_64[4 /*10*/])))
					{
						if (!func_283(Local_64[4 /*10*/], 1464580341, 1))
						{
							UNK_0x796BDF31572BB055(Local_64[4 /*10*/], UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 4000);
							UNK_0xC6EB89C59F2AF6B8(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, false, 0, 0, 0);
						}
					}
					else if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), UNK_0x68F4C0EC296D3901(Local_64[4 /*10*/], true), 1) < 12f && UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0))
					{
						if (!func_283(Local_64[4 /*10*/], 1464580341, 1))
						{
							UNK_0x796BDF31572BB055(Local_64[4 /*10*/], UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 4000);
							UNK_0xC6EB89C59F2AF6B8(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, false, 0, 0, 0);
						}
					}
				}
				if (iLocal_2104 > 1)
				{
					if (func_107(Local_64[4 /*10*/]))
					{
						if (UNK_0x6AB6A474D29FA7D8(Local_64[4 /*10*/], Local_55[0 /*2*/]))
						{
							UNK_0x0FB22E2FED7BCC7E(Local_64[4 /*10*/]);
							func_224(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
							iLocal_399 = 3;
							iLocal_401 = 3;
							UNK_0x327AAEE25F323797(Local_64[4 /*10*/]);
							UNK_0x96167B03C5A77156(Local_64[4 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, -1, 0.25f, 0, -122.93f);
							iLocal_403 = UNK_0x1C0640BA9A7327B3();
							bLocal_404 = false;
						}
					}
				}
			}
			if (func_107(Local_64[4 /*10*/]))
			{
				if (!UNK_0xB72E131222E66495(Local_64[4 /*10*/]))
				{
					if (bLocal_404)
					{
						if ((UNK_0xD1960163A3042274(Local_64[4 /*10*/], 242628503) != 1 && UNK_0xD1960163A3042274(Local_64[4 /*10*/], 713668775) != 1) && UNK_0xD1960163A3042274(Local_64[4 /*10*/], 1464580341) != 1)
						{
							if (!UNK_0xB4ECF989E2C1DAC8(Local_64[4 /*10*/], bLocal_50, "cellphone_call_listen_c", 3))
							{
								UNK_0xC6EB89C59F2AF6B8(Local_64[4 /*10*/], bLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, false, 0, 0, 0);
							}
							if (UNK_0x5A91F08DF773C39D(Local_64[4 /*10*/], 1228.056f, -3000.427f, 8.4424f, 2f, 2f, 2f, false, true, 0))
							{
								if (UNK_0x1C2E18E9C63BEB77("docksprep1"))
								{
									UNK_0xF44B0E19CAC31C33(Local_64[4 /*10*/], "docksprep1", 0, 0, -1);
								}
							}
							else if (UNK_0x1C2E18E9C63BEB77("docksprep1"))
							{
								UNK_0xF44B0E19CAC31C33(Local_64[4 /*10*/], "docksprep1", 0, 8, -1);
							}
						}
					}
				}
				else
				{
					if ((UNK_0x1C0640BA9A7327B3() - iLocal_407) > 10000)
					{
						if (!UNK_0xEB9B438EB009C4F1(Local_64[4 /*10*/]))
						{
							if (UNK_0x5A91F08DF773C39D(Local_64[4 /*10*/], 1251.625f, -3003.338f, 8.31909f, 2f, 2f, 2f, false, true, 0))
							{
								UNK_0xF2332141D3B90CF2(Local_64[4 /*10*/], 0, 0);
							}
							else if (UNK_0x5A91F08DF773C39D(Local_64[4 /*10*/], 1228.849f, -2986.284f, 8.31909f, 2f, 2f, 2f, false, true, 0))
							{
								UNK_0xF2332141D3B90CF2(Local_64[4 /*10*/], 0, 0);
							}
						}
						else
						{
							iLocal_407 = UNK_0x1C0640BA9A7327B3();
							UNK_0xDAB078B1A98D9A18(Local_64[4 /*10*/], 1, -1, 3000);
						}
					}
					if (!UNK_0x65636D4556D82155(Local_64[4 /*10*/]) && (UNK_0x1C0640BA9A7327B3() - iLocal_408) > 4000)
					{
						func_282(Local_64[4 /*10*/], "Sol1_EFAA", "CONSTRUCTION2", 3);
						iLocal_408 = UNK_0x1C0640BA9A7327B3();
					}
				}
				if (((UNK_0xFA4CE147B4D9AEE0(Local_64[4 /*10*/], 124) || UNK_0xFA4CE147B4D9AEE0(Local_64[4 /*10*/], 125)) || UNK_0xFA4CE147B4D9AEE0(Local_64[4 /*10*/], 126)) || UNK_0xFA4CE147B4D9AEE0(Local_64[4 /*10*/], 118))
				{
					UNK_0x0FB22E2FED7BCC7E(Local_64[4 /*10*/]);
					func_224(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 1;
					UNK_0xC6EB89C59F2AF6B8(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, false, 0, 0, 0);
					UNK_0xF9B5DB58254657F1(Local_64[4 /*10*/], -1, UNK_0x16F2683693E537C9(), -1, 1);
				}
				else if (UNK_0xFA4CE147B4D9AEE0(Local_64[4 /*10*/], 23))
				{
					UNK_0x0FB22E2FED7BCC7E(Local_64[4 /*10*/]);
					func_224(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 2;
					UNK_0xA3BF0AA5A2608191(Local_64[4 /*10*/]);
					UNK_0xC6EB89C59F2AF6B8(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, false, 0, 0, 0);
					UNK_0x8BE3D040D15AEA1D(Local_64[4 /*10*/], -1);
				}
				else if (UNK_0xB87D13D0C064E9D1(Local_64[4 /*10*/], UNK_0x16F2683693E537C9(), 1))
				{
					UNK_0x0FB22E2FED7BCC7E(Local_64[4 /*10*/]);
					UNK_0xC6EB89C59F2AF6B8(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, false, 0, 0, 0);
					func_224(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 4;
				}
			}
			break;
		case 2:
			if (func_107(Local_64[4 /*10*/]))
			{
				if (!UNK_0xC7E2E6167C09468B(Local_64[4 /*10*/], UNK_0x16F2683693E537C9()))
				{
					UNK_0x0C8C0C840C2D1AD2(Local_64[4 /*10*/], UNK_0x16F2683693E537C9(), -1, 3104, 2);
				}
			}
			switch (iLocal_400)
			{
				case 0:
					if (func_107(Local_64[4 /*10*/]))
					{
						if (func_12(&uLocal_213, "SOL1AUD", "SOL1_SEE3", 7, 0, 0, 0))
						{
							UNK_0xDD353D0E9C789D0E(&iLocal_379);
							UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), -1, 4f, 2f, 1073741824 /* Float: 2f */, 0);
							UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), -1);
							UNK_0x75ABDC5F81978924(iLocal_379);
							UNK_0x78ADC381772E3D54(Local_64[4 /*10*/], iLocal_379);
							UNK_0xF82EA857DA10E0CD(&iLocal_379);
							UNK_0xC6EB89C59F2AF6B8(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, false, 0, 0, 0);
							iLocal_402 = UNK_0x1C0640BA9A7327B3();
							iLocal_400 = 1;
						}
					}
					break;
				case 1:
					if ((UNK_0x1C0640BA9A7327B3() - iLocal_402) > 4000)
					{
						if (func_107(Local_64[4 /*10*/]))
						{
							if (func_12(&uLocal_213, "SOL1AUD", "SOL1_SEE4", 7, 0, 0, 0))
							{
								UNK_0xDD353D0E9C789D0E(&iLocal_379);
								UNK_0xE185F110925D87DB(false, UNK_0x16F2683693E537C9(), -1, 3f, 1f, 1073741824 /* Float: 2f */, 0);
								UNK_0xF96A174EE26D7588(false, UNK_0x16F2683693E537C9(), -1);
								UNK_0x75ABDC5F81978924(iLocal_379);
								UNK_0x78ADC381772E3D54(Local_64[4 /*10*/], iLocal_379);
								UNK_0xF82EA857DA10E0CD(&iLocal_379);
								UNK_0xC6EB89C59F2AF6B8(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, false, 0, 0, 0);
								iLocal_402 = UNK_0x1C0640BA9A7327B3();
								iLocal_400 = 2;
							}
						}
					}
					break;
				case 2:
					if ((UNK_0x1C0640BA9A7327B3() - iLocal_402) > 8000)
					{
						if (func_107(Local_64[4 /*10*/]))
						{
							if (func_12(&uLocal_213, "SOL1AUD", "SOL1_COPS2", 7, 0, 0, 0))
							{
								iLocal_402 = UNK_0x1C0640BA9A7327B3();
								iLocal_401 = 4;
								iLocal_399 = 3;
							}
						}
					}
					break;
			}
			if (!UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, true, 0) || !func_107(Local_64[4 /*10*/]))
			{
				iLocal_399 = 0;
			}
			UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &bLocal_406, 1);
			if (func_107(Local_64[4 /*10*/]))
			{
				if ((UNK_0xFA4CE147B4D9AEE0(Local_64[4 /*10*/], 124) || UNK_0xFA4CE147B4D9AEE0(Local_64[4 /*10*/], 125)) || UNK_0xFA4CE147B4D9AEE0(Local_64[4 /*10*/], 126))
				{
					func_224(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 1;
					UNK_0xF9B5DB58254657F1(Local_64[4 /*10*/], -1, UNK_0x16F2683693E537C9(), -1, 1);
					UNK_0xC6EB89C59F2AF6B8(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, false, 0, 0, 0);
				}
				else if (UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), Local_64[4 /*10*/]) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), Local_64[4 /*10*/]))
				{
					if (UNK_0x654E7ACE881E41FE(bLocal_406) != joaat("GROUP_MELEE") && bLocal_406 != joaat("WEAPON_UNARMED"))
					{
						func_224(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_399 = 3;
						iLocal_401 = 1;
						UNK_0x327AAEE25F323797(Local_64[4 /*10*/]);
						UNK_0xF9B5DB58254657F1(Local_64[4 /*10*/], -1, UNK_0x16F2683693E537C9(), -1, 0);
					}
				}
				else if (UNK_0xFA4CE147B4D9AEE0(Local_64[4 /*10*/], 23))
				{
					func_224(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 2;
					UNK_0x8BE3D040D15AEA1D(Local_64[4 /*10*/], -1);
					UNK_0xC6EB89C59F2AF6B8(Local_64[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, false, 0, 0, 0);
				}
				else if (UNK_0xB87D13D0C064E9D1(Local_64[4 /*10*/], UNK_0x16F2683693E537C9(), 1))
				{
					func_224(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_399 = 3;
					iLocal_401 = 4;
				}
			}
			break;
		case 3:
			switch (iLocal_401)
			{
				case 1:
					if (func_107(Local_64[4 /*10*/]))
					{
						if (func_12(&uLocal_213, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
						{
							bLocal_405 = true;
							iLocal_401 = 4;
						}
					}
					else
					{
						bLocal_404 = true;
						iLocal_399 = 0;
					}
					break;
				case 2:
					if (func_107(Local_64[4 /*10*/]))
					{
						if (func_12(&uLocal_213, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
						{
							bLocal_405 = true;
							iLocal_401 = 4;
						}
					}
					else
					{
						bLocal_404 = true;
						iLocal_399 = 0;
					}
					break;
				case 3:
					if (func_107(Local_64[4 /*10*/]))
					{
						if (UNK_0x5A91F08DF773C39D(Local_64[4 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, 2f, 2f, false, true, 0))
						{
							if (func_12(&uLocal_213, "SOL1AUD", "SOL1_SUB1", 7, 0, 0, 0))
							{
								bLocal_405 = true;
								iLocal_401 = 4;
							}
						}
						if (!UNK_0xE0EC712E4BE1FC42(Local_64[4 /*10*/], Local_55[0 /*2*/]))
						{
							UNK_0x0C8C0C840C2D1AD2(Local_64[4 /*10*/], Local_55[0 /*2*/], -1, 2096, 2);
						}
					}
					else
					{
						bLocal_404 = true;
						iLocal_399 = 0;
					}
					break;
				case 4:
					if (func_107(Local_64[4 /*10*/]))
					{
						if (!UNK_0x869EFD0BC0868856(Local_64[4 /*10*/]) && !UNK_0xA48EBBEA418ADC94(Local_64[4 /*10*/]))
						{
							if (func_12(&uLocal_213, "SOL1AUD", "SOL1_COPSIN2", 7, 0, 0, 0))
							{
								UNK_0xA3BF0AA5A2608191(Local_64[4 /*10*/]);
								UNK_0xDD353D0E9C789D0E(&iLocal_379);
								UNK_0xC6EB89C59F2AF6B8(false, bLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, false, 0, 0, 0);
								if (bLocal_405)
								{
									UNK_0x96167B03C5A77156(false, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
									UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
								}
								else
								{
									UNK_0x96167B03C5A77156(false, 1228.775f, -2923.852f, 8.31909f, 1f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
									UNK_0xA371FDC12D462090(false, 1183.287f, -2947.87f, 4.8986f, 100f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */);
								}
								UNK_0x75ABDC5F81978924(iLocal_379);
								UNK_0x78ADC381772E3D54(Local_64[4 /*10*/], iLocal_379);
								UNK_0xF82EA857DA10E0CD(&iLocal_379);
								iLocal_402 = UNK_0x1C0640BA9A7327B3();
								UNK_0xC92DB9682A650680("DHP1_ATTACKED");
								bLocal_409 = false;
								iLocal_401 = 5;
							}
						}
					}
					else
					{
						bLocal_404 = true;
						iLocal_399 = 0;
					}
					break;
				case 5:
					if ((UNK_0x1C0640BA9A7327B3() - iLocal_402) > 8000)
					{
						if (!bLocal_409)
						{
							if (UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) < 1)
							{
								UNK_0xCB9603FE12CFDEF4(UNK_0xD803B885F5E47A62(), 1, 0);
								UNK_0x56EA5D248F36A081(UNK_0xD803B885F5E47A62(), 0);
								bLocal_409 = true;
							}
						}
						if (func_107(Local_64[4 /*10*/]))
						{
							if (bLocal_405)
							{
								if (!UNK_0xE9FDA1035CFEA94F(Local_64[4 /*10*/]))
								{
									UNK_0xF3268524E9BE6D6E(Local_64[4 /*10*/], UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
								}
							}
							else if (UNK_0xD1960163A3042274(Local_64[4 /*10*/], 923520851) != 1)
							{
								UNK_0xA371FDC12D462090(Local_64[4 /*10*/], 1183.287f, -2947.87f, 4.8986f, 100f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */);
							}
						}
					}
					if (!bLocal_405)
					{
						UNK_0xCAE036C45E7FC720(UNK_0x16F2683693E537C9(), &bLocal_406, 1);
						if (func_107(Local_64[4 /*10*/]))
						{
							if ((UNK_0xFA4CE147B4D9AEE0(Local_64[4 /*10*/], 124) || UNK_0xFA4CE147B4D9AEE0(Local_64[4 /*10*/], 125)) || UNK_0xFA4CE147B4D9AEE0(Local_64[4 /*10*/], 126))
							{
								func_224(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (func_12(&uLocal_213, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
								{
									UNK_0xA3BF0AA5A2608191(Local_64[4 /*10*/]);
									UNK_0xDD353D0E9C789D0E(&iLocal_379);
									UNK_0xF9B5DB58254657F1(false, 3000, UNK_0x16F2683693E537C9(), -1, 0);
									UNK_0x96167B03C5A77156(false, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
									UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
									UNK_0x75ABDC5F81978924(iLocal_379);
									UNK_0x78ADC381772E3D54(Local_64[4 /*10*/], iLocal_379);
									UNK_0xF82EA857DA10E0CD(&iLocal_379);
									iLocal_402 = UNK_0x1C0640BA9A7327B3();
									bLocal_405 = true;
								}
							}
							else if ((UNK_0xD3AB958FFC730661(UNK_0xD803B885F5E47A62(), Local_64[4 /*10*/]) || UNK_0x292E02BF8ABF889C(UNK_0xD803B885F5E47A62(), Local_64[4 /*10*/])) && UNK_0x7069CC4DE1EA3FAA(Local_64[4 /*10*/], UNK_0x16F2683693E537C9(), 160f))
							{
								if (UNK_0x654E7ACE881E41FE(bLocal_406) != joaat("GROUP_MELEE") && bLocal_406 != joaat("WEAPON_UNARMED"))
								{
									func_224(&uLocal_213, 4, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
									if (func_12(&uLocal_213, "SOL1AUD", "SOL1_SCAR2", 7, 0, 0, 0))
									{
										UNK_0xA3BF0AA5A2608191(Local_64[4 /*10*/]);
										UNK_0xDD353D0E9C789D0E(&iLocal_379);
										UNK_0xF9B5DB58254657F1(false, 3000, UNK_0x16F2683693E537C9(), -1, 0);
										UNK_0x96167B03C5A77156(false, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
										UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
										UNK_0x75ABDC5F81978924(iLocal_379);
										UNK_0x78ADC381772E3D54(Local_64[4 /*10*/], iLocal_379);
										UNK_0xF82EA857DA10E0CD(&iLocal_379);
										bLocal_405 = true;
										iLocal_402 = UNK_0x1C0640BA9A7327B3();
									}
								}
							}
							else if (UNK_0xFA4CE147B4D9AEE0(Local_64[4 /*10*/], 23))
							{
								func_224(&uLocal_213, 3, Local_64[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (func_12(&uLocal_213, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
								{
									UNK_0xA3BF0AA5A2608191(Local_64[4 /*10*/]);
									UNK_0xDD353D0E9C789D0E(&iLocal_379);
									UNK_0x8BE3D040D15AEA1D(false, -1);
									UNK_0x96167B03C5A77156(false, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
									UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
									UNK_0x75ABDC5F81978924(iLocal_379);
									UNK_0x78ADC381772E3D54(Local_64[4 /*10*/], iLocal_379);
									UNK_0xF82EA857DA10E0CD(&iLocal_379);
									bLocal_405 = true;
								}
							}
							else if (UNK_0xB87D13D0C064E9D1(Local_64[4 /*10*/], UNK_0x16F2683693E537C9(), 1))
							{
								UNK_0xA3BF0AA5A2608191(Local_64[4 /*10*/]);
								UNK_0xDD353D0E9C789D0E(&iLocal_379);
								UNK_0x96167B03C5A77156(false, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 1048576000 /* Float: 0.25f */, 0, 1193033728);
								UNK_0xF3268524E9BE6D6E(false, UNK_0x16F2683693E537C9(), 200f, -1, 0, 0);
								UNK_0x75ABDC5F81978924(iLocal_379);
								UNK_0x78ADC381772E3D54(Local_64[4 /*10*/], iLocal_379);
								UNK_0xF82EA857DA10E0CD(&iLocal_379);
								bLocal_405 = true;
								iLocal_402 = UNK_0x1C0640BA9A7327B3();
							}
						}
					}
					break;
			}
			break;
	}
}

void func_282(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	UNK_0xEB0A515D699A7E90(bParam0, bParam1, bParam2, func_60(iParam3), 0);
}

bool func_283(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = UNK_0xD1960163A3042274(bParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return true;
		}
	}
	return false;
}

void func_284()
{
	switch (iLocal_459)
	{
		case 0:
			switch (iLocal_458)
			{
				case 0:
					if (func_107(Local_55[0 /*2*/]))
					{
						if ((!UNK_0xD17F06053799A7CA() && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_55[0 /*2*/], 0)) && UNK_0x179932739160BA96(UNK_0xD803B885F5E47A62()) == 0)
						{
							func_289();
							iLocal_456 = UNK_0x1C0640BA9A7327B3();
							iLocal_458 = 1;
						}
					}
					break;
				case 1:
					if ((UNK_0x1C0640BA9A7327B3() - iLocal_456) > 6000 && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_55[0 /*2*/], 0))
					{
						func_224(&uLocal_213, 1, 0, "FLOYD", 0, 1);
						if (func_12(&uLocal_213, "DHP1AUD", "DHP1_TSUB", 7, 0, 0, 0))
						{
							iLocal_458 = 2;
						}
					}
					break;
				case 2:
					if (func_11())
					{
						if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_55[0 /*2*/], 0))
						{
							if (func_37())
							{
								func_288(0);
							}
						}
						else if (!func_37())
						{
							func_288(1);
						}
					}
					else
					{
						iLocal_458 = 3;
					}
					break;
				case 3:
					iLocal_459 = 2;
					iLocal_458 = 0;
					iLocal_456 = UNK_0x1C0640BA9A7327B3();
					break;
			}
			break;
		case 2:
			switch (iLocal_458)
			{
				case 0:
					if ((!UNK_0xD17F06053799A7CA() && UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_55[0 /*2*/], 0)) && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 324.7653f, -2974.495f, -1f, 1) < 110f)
					{
						func_289();
						iLocal_458 = 1;
					}
					break;
				case 1:
					if (func_12(&uLocal_213, "DHP1AUD", "DHP1_APP", 7, 0, 0, 0))
					{
						iLocal_458 = 2;
					}
					break;
				case 2:
					if (func_11())
					{
					}
					else
					{
						iLocal_458 = 3;
					}
					break;
				case 3:
					iLocal_459 = 3;
					iLocal_458 = 0;
					iLocal_456 = UNK_0x1C0640BA9A7327B3();
					break;
			}
			break;
		case 3:
			if (func_107(Local_55[2 /*2*/]) && func_107(Local_64[3 /*10*/]))
			{
				switch (iLocal_458)
				{
					case 0:
						if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_55[2 /*2*/], 0) && UNK_0xC42A92762C58E1B9(Local_64[3 /*10*/], Local_55[2 /*2*/], 0))
						{
							if (func_11())
							{
								func_289();
							}
							else
							{
								iLocal_458 = 1;
							}
						}
						break;
					case 1:
						func_282(Local_64[3 /*10*/], "DHP1_AIAA", "FLOYD", 24);
						iLocal_458 = 2;
						break;
					case 2:
						if (!UNK_0x65636D4556D82155(Local_64[3 /*10*/]))
						{
							iLocal_458 = 3;
						}
						break;
					case 3:
						iLocal_459 = 4;
						iLocal_458 = 0;
						iLocal_456 = UNK_0x1C0640BA9A7327B3();
						break;
				}
			}
			break;
		case 4:
			if (func_107(Local_55[2 /*2*/]) && func_107(Local_64[3 /*10*/]))
			{
				switch (iLocal_458)
				{
					case 0:
						if (((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0xC42A92762C58E1B9(Local_64[3 /*10*/], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0)) && UNK_0x50B5F6F3C29E9380(Local_55[1 /*2*/], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0))) && !UNK_0xD17F06053799A7CA())
						{
							func_289();
							iLocal_456 = UNK_0x1C0640BA9A7327B3();
							iLocal_458 = 1;
						}
						break;
					case 1:
						if ((UNK_0x1C0640BA9A7327B3() - iLocal_456) > 2000)
						{
							func_224(&uLocal_213, 1, Local_64[3 /*10*/], "FLOYD", 0, 1);
							if (func_12(&uLocal_213, "DHP1AUD", "DHP1_TRCK", 7, 0, 0, 0))
							{
								iLocal_458 = 2;
							}
						}
						break;
					case 2:
						if (func_11())
						{
							if ((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0xC42A92762C58E1B9(Local_64[3 /*10*/], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0)) && UNK_0x50B5F6F3C29E9380(Local_55[1 /*2*/], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0)))
							{
								if (func_37())
								{
									func_288(0);
								}
							}
							else if (!func_37())
							{
								func_288(1);
							}
						}
						else
						{
							iLocal_458 = 3;
						}
						break;
					case 3:
						iLocal_459 = 5;
						iLocal_458 = 0;
						iLocal_456 = UNK_0x1C0640BA9A7327B3();
						break;
				}
				if (UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(Local_55[0 /*2*/], true), -323.73f, -2613.702f, 5f, 1) < 60f)
				{
					func_287();
					iLocal_458 = 3;
				}
			}
			break;
		case 5:
			switch (iLocal_458)
			{
				case 0:
					if ((((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0xC42A92762C58E1B9(Local_64[3 /*10*/], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0)) && UNK_0x50B5F6F3C29E9380(Local_55[1 /*2*/], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0))) && !UNK_0xD17F06053799A7CA()) && UNK_0x3D1053F9EB43B7AD(UNK_0x16F2683693E537C9(), -273.635f, -2558.818f, 4.751376f, -405.7218f, -2695.898f, 14.37495f, 51f, 0, true, 0))
					{
						func_289();
						iLocal_458 = 1;
					}
					break;
				case 1:
					bLocal_455 = func_286();
					func_224(&uLocal_213, 1, Local_64[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_455)
					{
						if (func_285(&uLocal_213, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_1", 7, 0, 0))
						{
							iLocal_458 = 2;
						}
					}
					else if (func_285(&uLocal_213, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_2", 7, 0, 0))
					{
						iLocal_458 = 2;
					}
					break;
				case 2:
					if (!func_11())
					{
						iLocal_458 = 3;
					}
					break;
				case 3:
					iLocal_459 = 6;
					iLocal_458 = 0;
					iLocal_456 = UNK_0x1C0640BA9A7327B3();
					break;
			}
			break;
		case 6:
			switch (iLocal_458)
			{
				case 0:
					if ((((UNK_0x405E212DDE472467(UNK_0x16F2683693E537C9(), 0) && UNK_0xC42A92762C58E1B9(Local_64[3 /*10*/], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0), 0)) && UNK_0x50B5F6F3C29E9380(Local_55[1 /*2*/], UNK_0x6937EA2286828455(UNK_0x16F2683693E537C9(), 0))) && !UNK_0xD17F06053799A7CA()) && UNK_0x0EB28750412C3A5A(UNK_0x68F4C0EC296D3901(Local_55[0 /*2*/], true), -323.73f, -2613.702f, 5f, 1) < 40f)
					{
						func_289();
						iLocal_458 = 1;
					}
					break;
				case 1:
					bLocal_455 = func_286();
					func_224(&uLocal_213, 1, Local_64[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_455)
					{
						if (func_285(&uLocal_213, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_1", 7, 0, 0))
						{
							iLocal_458 = 2;
						}
					}
					else if (func_285(&uLocal_213, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_2", 7, 0, 0))
					{
						iLocal_458 = 2;
					}
					break;
				case 2:
					if (!func_11())
					{
						iLocal_458 = 3;
					}
					break;
				case 3:
					break;
			}
			break;
	}
}

int func_285(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_34(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_13(sParam2, iParam4, 0);
}

int func_286()
{
	if (UNK_0xEAE0D21A50E6C7F4(UNK_0x09AC81E49EA267F7(false, 65535), false))
	{
		return 1;
	}
	return 0;
}

void func_287()
{
	Global_19671 = 0;
	func_33();
}

void func_288(int iParam0)
{
	Global_21816 = iParam0;
}

void func_289()
{
	Global_19671 = 0;
	func_290();
}

void func_290()
{
	if (UNK_0x25037C66EB32B076())
	{
		UNK_0x8BD0DC8EEFDC56D8();
		Global_21816 = 0;
		UNK_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

bool func_291(var uParam0)
{
	if (UNK_0xDF1306B443CD3D15(*uParam0, 0))
	{
		if (((UNK_0x7B5606C651AB51B5(*uParam0, 0, 7000) || UNK_0x7B5606C651AB51B5(*uParam0, 3, 30000)) || UNK_0x7B5606C651AB51B5(*uParam0, 2, 30000)) || UNK_0x7B5606C651AB51B5(*uParam0, 1, 40000))
		{
			return true;
		}
	}
	return false;
}

void func_292(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		UNK_0x437347B10A200C4B(*bParam0, 0);
		if (UNK_0xAF6690C489CC6203(*bParam0) && UNK_0x9C77D2D0559097F0(*bParam0, 1))
		{
			UNK_0x046C362CF15F1935(bParam0);
		}
	}
}

int func_293(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = UNK_0xA30EC016B12C03E4();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!UNK_0xEB6A8945D1AC98A1(bParam0))
	{
		if (!UNK_0x3C583F939C836C5C(bParam0))
		{
			if (bParam8 == -1)
			{
				UNK_0xA29E145196B9739D(bParam0, 1);
			}
			else
			{
				UNK_0xE23B4401F4442A7E(bParam0, 1, bParam8);
			}
			uParam1->f_7 = bParam0;
			UNK_0x03E7282D82C7B3B6(bParam0, iParam2);
			UNK_0xF8BE15A7B963DB56(bParam0, fParam6);
			if (UNK_0xE4EDC4B0E92C078B(*uParam1))
			{
				UNK_0x2A065371C9D96655(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			UNK_0xFABCB9076292E3BA(bParam0, iParam9);
		}
		UNK_0xF947FFD8DA795A7F(bParam0, bParam4);
		UNK_0xB46A36D2F28E60DE(bParam0, bParam5);
		*uParam1 = UNK_0x380B922C6BB1F223(bParam0);
		if (!iParam9 == -1)
		{
			if (UNK_0xE4EDC4B0E92C078B(*uParam1))
			{
				if (!bParam8 == -1)
				{
					UNK_0x61755AC17D8F538E(*uParam1, bParam8);
				}
				if (!UNK_0xEA6BC48857E0AC4C(bParam7))
				{
					UNK_0x64399B11CDD5A727("STRING");
					if (bParam10)
					{
						UNK_0xD06AC7C87A34A6AD(bParam7);
					}
					else
					{
						UNK_0x6B012227B3921E18(bParam7);
					}
					UNK_0x4FA118D51B4F2476(*uParam1);
				}
				UNK_0x2A065371C9D96655(*uParam1, 7);
			}
		}
		if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_6, 2))
		{
			if (UNK_0xE4EDC4B0E92C078B(*uParam1))
			{
				UNK_0x5D96D8530B3D0904(&(uParam1->f_6), 2);
			}
		}
		if (UNK_0x405E212DDE472467(bParam0, 0))
		{
			uParam1->f_1 = UNK_0x498C79575FE5BBCE(bParam0);
			if (!UNK_0xEAE0D21A50E6C7F4(uParam1->f_6, 3))
			{
				if (UNK_0xE4EDC4B0E92C078B(uParam1->f_1))
				{
					if (!bParam8 == -1)
					{
						UNK_0x61755AC17D8F538E(uParam1->f_1, bParam8);
					}
					if (!UNK_0xEA6BC48857E0AC4C(bParam7))
					{
						UNK_0x64399B11CDD5A727("STRING");
						if (bParam10)
						{
							UNK_0xD06AC7C87A34A6AD(bParam7);
						}
						else
						{
							UNK_0x6B012227B3921E18(bParam7);
						}
						UNK_0x4FA118D51B4F2476(uParam1->f_1);
					}
					UNK_0x2A065371C9D96655(uParam1->f_1, 7);
					UNK_0x5D96D8530B3D0904(&(uParam1->f_6), 3);
				}
			}
			else if (!UNK_0xE4EDC4B0E92C078B(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				UNK_0x0674E58A79778E99(&(uParam1->f_6), 3);
			}
		}
		else if (UNK_0xE4EDC4B0E92C078B(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			UNK_0x0674E58A79778E99(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_294()
{
	vector3 vVar0;
	bool bVar3;

	if (bLocal_2107 == 1)
	{
		if (iLocal_2102 == 0)
		{
			if (!UNK_0x757EF87A33649210())
			{
				if (!UNK_0xD0BB2359EC70FC37())
				{
					UNK_0x53491B90E4FD0E56(800);
				}
			}
			else
			{
				func_195(iLocal_2108);
			}
		}
		else if (iLocal_2102 == 3)
		{
			UNK_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			func_312();
			if (UNK_0x39B7A3CCD2467CAB())
			{
				UNK_0x5C8D148FC238F38A();
			}
			func_311(&uLocal_460);
			if (!func_310())
			{
				func_309(iLocal_2108, &vVar0, &bVar3);
				UNK_0xA47B46945FF6DE74(UNK_0x16F2683693E537C9(), vVar0, 1, 0, 0, 1);
				UNK_0xD8F6A53F4799FAFE(UNK_0x16F2683693E537C9(), bVar3);
				UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), true);
				func_308(&uLocal_460, vVar0, 50f, 0);
			}
			func_271(iLocal_2103);
			while (!func_306(&uLocal_460))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_2103)
			{
				case 0:
					func_304();
					break;
				case 1:
					func_303();
					break;
				case 2:
					func_299();
					break;
				case 3:
					func_295();
					break;
			}
			UNK_0x2FB9A57162E54BAB(0f);
			UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
			UNK_0xC92DB9682A650680("DHP1_START");
			bLocal_2107 = false;
			if (!func_310())
			{
				func_202(&uLocal_460);
			}
		}
	}
}

void func_295()
{
	if (!func_107(Local_55[0 /*2*/]))
	{
		Local_55[0 /*2*/] = UNK_0x122AAB0B1D6F55AD(joaat("SUBMERSIBLE"), -337.7228f, -2623.835f, 8.6595f, 135.24f, true, true, false);
		UNK_0x05EC10F460C3A4AF(Local_55[0 /*2*/], 0);
		UNK_0x56FDC9ADE35F7DB0(Local_55[0 /*2*/], false, true, 0);
		UNK_0x0882E3DC0C991680(Local_55[0 /*2*/], 1);
		UNK_0x3E5CE368CD085FFA(Local_55[0 /*2*/], 1);
		UNK_0xE3430088DE1D3440(Local_55[0 /*2*/], 0);
	}
	if (!func_107(Local_55[2 /*2*/]))
	{
		Local_55[2 /*2*/] = UNK_0x122AAB0B1D6F55AD(joaat("PACKER"), -337.7228f, -2627.038f, 5.001f, 134.9894f, true, true, false);
		UNK_0x05EC10F460C3A4AF(Local_55[2 /*2*/], 0);
		UNK_0xC6A6B4DDD6DC073A(Local_55[2 /*2*/], false);
		UNK_0xA22F71BBC8173C39(Local_55[2 /*2*/], false);
		UNK_0x44A200C9B6E1CEA6(Local_55[2 /*2*/], true);
	}
	if (!func_107(Local_55[1 /*2*/]))
	{
		Local_55[1 /*2*/] = UNK_0x122AAB0B1D6F55AD(joaat("ARMYTRAILER"), -331.728f, -2621.006f, 7.8828f, 135.24f, true, true, false);
		UNK_0x44A200C9B6E1CEA6(Local_55[1 /*2*/], true);
	}
	UNK_0xC74DAD25331A5425(Local_55[2 /*2*/], Local_55[1 /*2*/], 0.5f);
	UNK_0xEB82176F26E339BD(Local_55[1 /*2*/]);
	UNK_0xE6F7063ADA854762(Local_55[0 /*2*/], Local_55[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!UNK_0xC844350D5D58C99A(Local_169[4 /*2*/]))
	{
		Local_169[4 /*2*/] = UNK_0x7707E48765093646(joaat("PROP_SUB_COVER_01"), 297.5948f, -2950.354f, 5.0008f, true, true, false);
		UNK_0x9F528B1B53FBC5D9(Local_169[4 /*2*/], Local_55[1 /*2*/], -1, vLocal_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	if (!UNK_0xC844350D5D58C99A(Local_169[5 /*2*/]))
	{
		Local_169[5 /*2*/] = UNK_0x7707E48765093646(joaat("PROP_TARP_STRAP"), -332.8449f, -2622.157f, 8.7838f, true, true, false);
		UNK_0x9F528B1B53FBC5D9(Local_169[5 /*2*/], Local_55[1 /*2*/], -1, vLocal_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	if (func_310())
	{
		func_296(0, -1, 1);
	}
	else
	{
		UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
	}
}

void func_296(bool bParam0, bool bParam1, int iParam2)
{
	if (func_298() && func_310())
	{
		while (Global_98739 != 6)
		{
			SYSTEM::WAIT(0);
		}
		UNK_0x21387C9EECC2B220(false);
		if (UNK_0xC844350D5D58C99A(UNK_0x16F2683693E537C9()))
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				UNK_0xFE76348A7A0CEF66(UNK_0x16F2683693E537C9());
			}
		}
		if (bParam0 != 0)
		{
			if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xC844350D5D58C99A(bParam0))
				{
					if (UNK_0xDF1306B443CD3D15(bParam0, 0))
					{
						if (!UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), bParam0, 0))
						{
							UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), bParam0, bParam1);
							UNK_0xEF6276132B396452(0f, 1065353216 /* Float: 1f */);
							UNK_0x2FB9A57162E54BAB(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
			{
				UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
			}
		}
		UNK_0x17EFA7496495F972();
		func_297(0);
	}
}

void func_297(int iParam0)
{
	if (iParam0 == 1)
	{
		UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 13);
	}
	else
	{
		UNK_0x0674E58A79778E99(&(Global_98744.f_20), 13);
	}
}

bool func_298()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return true;
	}
	return false;
}

void func_299()
{
	if (!func_107(Local_55[0 /*2*/]))
	{
		Local_55[0 /*2*/] = UNK_0x122AAB0B1D6F55AD(joaat("SUBMERSIBLE"), 320.4211f, -2975.993f, -11.1896f, 2.5159f, true, true, false);
		UNK_0x6EEAA5C21760E9DB(Local_55[0 /*2*/], 0);
		UNK_0x56FDC9ADE35F7DB0(Local_55[0 /*2*/], false, true, 0);
		UNK_0x0882E3DC0C991680(Local_55[0 /*2*/], 1);
		UNK_0x3E5CE368CD085FFA(Local_55[0 /*2*/], 1);
		UNK_0xE3430088DE1D3440(Local_55[0 /*2*/], 0);
	}
	if (!func_107(Local_55[2 /*2*/]))
	{
		Local_55[2 /*2*/] = UNK_0x122AAB0B1D6F55AD(joaat("PACKER"), 297.5948f, -2950.354f, 5.0008f, 359.1976f, true, true, false);
		UNK_0xC6A6B4DDD6DC073A(Local_55[2 /*2*/], false);
		UNK_0xA22F71BBC8173C39(Local_55[2 /*2*/], false);
		UNK_0x44A200C9B6E1CEA6(Local_55[2 /*2*/], true);
	}
	if (!func_107(Local_55[1 /*2*/]))
	{
		Local_55[1 /*2*/] = UNK_0x122AAB0B1D6F55AD(joaat("ARMYTRAILER"), 297.2917f, -2970.246f, 4.8884f, 359.0483f, true, true, false);
		UNK_0x6EEAA5C21760E9DB(Local_55[1 /*2*/], 0);
		UNK_0x44A200C9B6E1CEA6(Local_55[1 /*2*/], true);
	}
	UNK_0xC74DAD25331A5425(Local_55[2 /*2*/], Local_55[1 /*2*/], 0.5f);
	UNK_0xEB82176F26E339BD(Local_55[1 /*2*/]);
	UNK_0xE6F7063ADA854762(Local_55[0 /*2*/], Local_55[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!UNK_0xC844350D5D58C99A(Local_169[4 /*2*/]))
	{
		Local_169[4 /*2*/] = UNK_0x7707E48765093646(joaat("PROP_SUB_COVER_01"), 297.5948f, -2950.354f, 5.0008f, true, true, false);
		UNK_0x9F528B1B53FBC5D9(Local_169[4 /*2*/], Local_55[1 /*2*/], -1, vLocal_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	if (!UNK_0xC844350D5D58C99A(Local_169[5 /*2*/]))
	{
		Local_169[5 /*2*/] = UNK_0x7707E48765093646(joaat("PROP_TARP_STRAP"), -332.8449f, -2622.157f, 8.7838f, true, true, false);
		UNK_0x9F528B1B53FBC5D9(Local_169[5 /*2*/], Local_55[1 /*2*/], -1, vLocal_440, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	while (!func_300(&(Local_64[3 /*10*/]), 32, Local_55[2 /*2*/], 0, 1))
	{
		SYSTEM::WAIT(0);
	}
	if (func_310())
	{
		func_296(Local_55[2 /*2*/], -1, 1);
	}
	else
	{
		UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
		UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), Local_55[2 /*2*/], -1);
	}
	UNK_0x6DF7BF67E86AAE86(Local_64[3 /*10*/], bLocal_394);
	UNK_0x536F1BE96C726C4B(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 100f, 1, 0, 0, false);
	iLocal_459 = 3;
	iLocal_458 = 0;
}

bool func_300(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	if (!func_26(iParam1))
	{
		bVar0 = func_302(iParam1);
		UNK_0x523BCC9DC80CD82F(bVar0);
		if (UNK_0xB87F6CF6E5628C67(bVar0))
		{
			if (UNK_0xC844350D5D58C99A(*bParam0))
			{
				UNK_0xEBA53F35D0085654(bParam0);
			}
			if (UNK_0xC844350D5D58C99A(bParam2) && UNK_0xDF1306B443CD3D15(bParam2, 0))
			{
				*bParam0 = UNK_0x852A19533F896693(bParam2, 26, bVar0, bParam3, 0, false);
				UNK_0x78ED16BE998AECC7(*bParam0);
				func_301(*bParam0, iParam1);
				if (bParam4)
				{
					UNK_0x71199B01895C6202(bVar0);
				}
			}
			return true;
		}
	}
	return false;
}

int func_301(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_94578[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_302(int iParam0)
{
	if (!func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_303()
{
	if (!UNK_0xC844350D5D58C99A(Local_55[0 /*2*/]))
	{
		Local_55[0 /*2*/] = UNK_0x122AAB0B1D6F55AD(joaat("SUBMERSIBLE"), 1272.398f, -2982.072f, -3.2414f, 201.5542f, true, true, false);
		UNK_0x3E5CE368CD085FFA(Local_55[0 /*2*/], 1);
	}
	if (func_310())
	{
		func_296(Local_55[0 /*2*/], -1, 1);
	}
	else
	{
		UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
		UNK_0xF821F915BC24D246(UNK_0x16F2683693E537C9(), Local_55[0 /*2*/], -1);
	}
	UNK_0x536F1BE96C726C4B(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 100f, 1, 0, 0, false);
	iLocal_459 = 0;
	iLocal_458 = 0;
}

void func_304()
{
	if (!UNK_0xC844350D5D58C99A(Local_55[0 /*2*/]))
	{
		Local_55[0 /*2*/] = UNK_0x122AAB0B1D6F55AD(joaat("SUBMERSIBLE"), 1260.802f, -3006.417f, 18.3289f, 178.9076f, true, true, false);
		func_305(Local_55[0 /*2*/], 0);
		UNK_0x1E9649458B15960F(Local_55[0 /*2*/], true);
		UNK_0xE8832A9E16A57A1F(Local_55[0 /*2*/], true, 1);
		UNK_0x120A395B0ECB8EA5(Local_55[0 /*2*/], false);
		UNK_0x3E5CE368CD085FFA(Local_55[0 /*2*/], 1);
	}
	if (!UNK_0xC844350D5D58C99A(Local_64[4 /*10*/]))
	{
		Local_64[4 /*10*/] = UNK_0x36F2404464202779(26, joaat("S_M_M_DOCKWORK_01"), 1229.322f, -3002.879f, 8.31861f, 270f, 1, true);
		UNK_0xC6EB89C59F2AF6B8(Local_64[4 /*10*/], bLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, false, 0, 0, 0);
		UNK_0xBAFED2F6486F771A(Local_64[4 /*10*/], 512, false);
		UNK_0xAFF39FB306F8E232(Local_64[4 /*10*/], 17, true);
		UNK_0x6DF7BF67E86AAE86(Local_64[4 /*10*/], bLocal_395);
		UNK_0x11AD11297DC58CC7(Local_64[4 /*10*/], true);
		UNK_0xCF443519BC24A3CB(Local_64[4 /*10*/], 45f);
		UNK_0xBEC9D6BBD21A735F(Local_64[4 /*10*/], 50f);
		UNK_0x8979D9784F39DF46(Local_64[4 /*10*/], -50f);
		UNK_0x33CE5A9E32EA10B2(Local_64[4 /*10*/], 1);
	}
	if (!UNK_0xC844350D5D58C99A(Local_169[0 /*2*/]))
	{
		Local_169[0 /*2*/] = UNK_0x7707E48765093646(joaat("PROP_LD_TEST_01"), 1260.692f, -3008.286f, 23.73365f, true, true, false);
		UNK_0x1E9649458B15960F(Local_169[0 /*2*/], true);
	}
	if (!UNK_0xC844350D5D58C99A(Local_169[1 /*2*/]))
	{
		Local_169[1 /*2*/] = UNK_0x7707E48765093646(joaat("PROP_LD_TEST_01"), 1260.752f, -3004.994f, 22.68315f, true, true, false);
		UNK_0x1E9649458B15960F(Local_169[1 /*2*/], true);
	}
	if (!UNK_0xC844350D5D58C99A(Local_169[2 /*2*/]))
	{
		Local_169[2 /*2*/] = UNK_0x7707E48765093646(joaat("PROP_SUB_RELEASE"), 1249.105f, -3007.968f, 9.68718f, true, true, false);
		UNK_0xC023D1C4BF532815(Local_169[2 /*2*/], 0f, 0f, 90f, 2, 1);
		UNK_0x1E9649458B15960F(Local_169[2 /*2*/], true);
	}
	if (!UNK_0xC844350D5D58C99A(Local_169[3 /*2*/]))
	{
		Local_169[3 /*2*/] = UNK_0x7707E48765093646(joaat("P_AMB_PHONE_01"), 1229.322f, -3002.879f, 8.31861f, true, true, false);
	}
	bLocal_383 = false;
	UNK_0x29398344B9E5B8A7("docksprep1");
	while (!UNK_0x1C2E18E9C63BEB77("docksprep1"))
	{
		SYSTEM::WAIT(0);
	}
	UNK_0x536F1BE96C726C4B(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 100f, 1, 0, 0, false);
	if (func_310())
	{
		func_296(0, -1, 1);
	}
	else
	{
		UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
	}
	iLocal_403 = UNK_0x1C0640BA9A7327B3();
	iLocal_459 = 0;
	iLocal_458 = 0;
}

void func_305(var uParam0, int iParam1)
{
	Global_98744.f_22[iParam1] = uParam0;
}

bool func_306(var uParam0)
{
	if (func_307(uParam0))
	{
		return true;
	}
	return false;
}

bool func_307(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (uParam0->f_982)
	{
		bVar0 = true;
		bVar1 = false;
		while (bVar1 < 30)
		{
			if ((*uParam0)[bVar1 /*5*/])
			{
				if (!(uParam0[bVar1 /*5*/])->f_1)
				{
					if (UNK_0xB87F6CF6E5628C67((uParam0[bVar1 /*5*/])->f_4))
					{
						(uParam0[bVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[bVar1 /*5*/])->f_2)
				{
					if ((uParam0[bVar1 /*5*/])->f_1)
					{
						UNK_0x71199B01895C6202((uParam0[bVar1 /*5*/])->f_4);
						func_90(uParam0[bVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 20)
		{
			if (uParam0->f_273[bVar1 /*5*/])
			{
				if (!uParam0->f_273[bVar1 /*5*/].f_1)
				{
					if (UNK_0xB4AE0788C1587752(uParam0->f_273[bVar1 /*5*/].f_4))
					{
						uParam0->f_273[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[bVar1 /*5*/].f_1)
					{
						UNK_0x8D17794CE3273D70(uParam0->f_273[bVar1 /*5*/].f_4);
						func_90(&(uParam0->f_273[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 20)
		{
			if (uParam0->f_374[bVar1 /*5*/])
			{
				if (!uParam0->f_374[bVar1 /*5*/].f_1)
				{
					if (UNK_0x1C2E18E9C63BEB77(uParam0->f_374[bVar1 /*5*/].f_4))
					{
						uParam0->f_374[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[bVar1 /*5*/].f_1)
					{
						UNK_0x2F3540C2227116A3(uParam0->f_374[bVar1 /*5*/].f_4);
						func_90(&(uParam0->f_374[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (uParam0->f_656[bVar1 /*6*/])
			{
				if (!uParam0->f_656[bVar1 /*6*/].f_1)
				{
					if (UNK_0x83D8570832F172A7(uParam0->f_656[bVar1 /*6*/].f_5))
					{
						uParam0->f_656[bVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[bVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[bVar1 /*6*/].f_1)
					{
						UNK_0xE17FDF9E3068281B(&(uParam0->f_656[bVar1 /*6*/].f_5));
						func_90(&(uParam0->f_656[bVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 30)
		{
			if (uParam0->f_475[bVar1 /*6*/])
			{
				if (!uParam0->f_475[bVar1 /*6*/].f_1)
				{
					if (UNK_0x3DDA6C6A285628E4(uParam0->f_475[bVar1 /*6*/].f_5, uParam0->f_475[bVar1 /*6*/].f_4))
					{
						uParam0->f_475[bVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[bVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[bVar1 /*6*/].f_1)
					{
						UNK_0xDB8844D4B7C60440(uParam0->f_475[bVar1 /*6*/].f_5, uParam0->f_475[bVar1 /*6*/].f_4);
						func_90(&(uParam0->f_475[bVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 10)
		{
			if (uParam0->f_202[bVar1 /*7*/])
			{
				if (!uParam0->f_202[bVar1 /*7*/].f_1)
				{
					if (UNK_0x1787731C4D1D6B19(uParam0->f_202[bVar1 /*7*/].f_4))
					{
						uParam0->f_202[bVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[bVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[bVar1 /*7*/].f_1)
					{
						UNK_0x2914827AC2790D54(uParam0->f_202[bVar1 /*7*/].f_4);
						func_90(&(uParam0->f_202[bVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 10)
		{
			if (uParam0->f_151[bVar1 /*5*/])
			{
				if (!uParam0->f_151[bVar1 /*5*/].f_1)
				{
					if (UNK_0x1F04E7FA44219580(uParam0->f_151[bVar1 /*5*/].f_4))
					{
						uParam0->f_151[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[bVar1 /*5*/].f_1)
					{
						UNK_0x058E3033265DBA9A(uParam0->f_151[bVar1 /*5*/].f_4);
						func_90(&(uParam0->f_151[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (uParam0->f_737[bVar1 /*5*/])
			{
				if (!uParam0->f_737[bVar1 /*5*/].f_1)
				{
					if (UNK_0xAE317D00A5A55DF6(uParam0->f_737[bVar1 /*5*/].f_4, 0, -1))
					{
						uParam0->f_737[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[bVar1 /*5*/].f_1)
					{
						UNK_0x42740B44BA8D7B43(uParam0->f_737[bVar1 /*5*/].f_4);
						func_90(&(uParam0->f_737[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 3)
		{
			if (uParam0->f_763[bVar1 /*5*/])
			{
				if (!uParam0->f_763[bVar1 /*5*/].f_1)
				{
					if (UNK_0xBD307E66C0669BFC(uParam0->f_763[bVar1 /*5*/].f_4))
					{
						uParam0->f_763[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[bVar1 /*5*/].f_1)
					{
						UNK_0x25BB71BA267FE042(uParam0->f_763[bVar1 /*5*/].f_4);
						func_90(&(uParam0->f_763[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 7)
		{
			if (!UNK_0xEA6BC48857E0AC4C(uParam0->f_687[bVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[bVar1 /*7*/])
				{
					iVar2 = UNK_0x60AFCA824DC1AD70(uParam0->f_687[bVar1 /*7*/].f_5);
					if (!uParam0->f_687[bVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[bVar1 /*7*/].f_1 = 1;
								break;
							case 0:
								uParam0->f_687[bVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							case 3:
								uParam0->f_687[bVar1 /*7*/].f_1 = 0;
								func_90(&(uParam0->f_687[bVar1 /*7*/]));
								break;
							case -1:
								uParam0->f_687[bVar1 /*7*/].f_1 = 0;
								UNK_0xBCE1F37016C0E41B(uParam0->f_687[bVar1 /*7*/].f_5);
								uParam0->f_687[bVar1 /*7*/] = 0;
								bVar0 = false;
								break;
						}
					}
				}
				else if (UNK_0xBD307E66C0669BFC(uParam0->f_687[bVar1 /*7*/].f_6))
				{
					uParam0->f_687[bVar1 /*7*/].f_5 = UNK_0x112DEE377BFBC278(uParam0->f_687[bVar1 /*7*/].f_4);
					uParam0->f_687[bVar1 /*7*/].f_3 = UNK_0x1C0640BA9A7327B3();
					uParam0->f_687[bVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[bVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[bVar1 /*7*/])
					{
						if (uParam0->f_687[bVar1 /*7*/].f_1)
						{
							UNK_0xBCE1F37016C0E41B(uParam0->f_687[bVar1 /*7*/].f_5);
							func_90(&(uParam0->f_687[bVar1 /*7*/]));
							uParam0->f_687[bVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_90(&(uParam0->f_687[bVar1 /*7*/]));
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 10)
		{
			if (uParam0->f_879[bVar1 /*5*/])
			{
				if (!uParam0->f_879[bVar1 /*5*/].f_1)
				{
					if (UNK_0xC76EFA929F5277B9(uParam0->f_879[bVar1 /*5*/].f_4))
					{
						uParam0->f_879[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_879[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_879[bVar1 /*5*/].f_1)
					{
						UNK_0x70EAF6AF279DEC61(uParam0->f_879[bVar1 /*5*/].f_4);
						func_90(&(uParam0->f_879[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (uParam0->f_930[bVar1 /*5*/])
			{
				if (!uParam0->f_930[bVar1 /*5*/].f_1)
				{
					if (UNK_0x93776B156FD8804A(uParam0->f_930[bVar1 /*5*/].f_4))
					{
						uParam0->f_930[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_930[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_930[bVar1 /*5*/].f_1)
					{
						func_90(&(uParam0->f_930[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[bVar1 /*5*/])
			{
				if (!uParam0->f_779[bVar1 /*5*/].f_1)
				{
					if (UNK_0x67C1D9E5B91B2E37(bVar1))
					{
						uParam0->f_779[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[bVar1 /*5*/].f_1)
					{
						UNK_0x11CCD0ACA866C6C5(bVar1, 1);
						func_90(&(uParam0->f_779[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		if (uParam0->f_860)
		{
			if (!uParam0->f_860.f_1)
			{
				if (UNK_0x25F7A4D42AF2AB93())
				{
					uParam0->f_860.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_860.f_2)
			{
				if (uParam0->f_860.f_1)
				{
					UNK_0x29D7581AEF4440C2();
					func_90(&(uParam0->f_860));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_864)
		{
			if (!uParam0->f_864.f_1)
			{
				if (UNK_0xEE4B5EDF70ABF498())
				{
					uParam0->f_864.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_864.f_2)
			{
				if (uParam0->f_864.f_1)
				{
					UNK_0xFE5EFE178CCBA358();
					func_90(&(uParam0->f_864));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_868 && UNK_0xEB880D98B5988D0C())
		{
			if (!uParam0->f_868.f_1)
			{
				if (UNK_0x68367101660E33F0())
				{
					uParam0->f_868.f_1 = 1;
					if (uParam0->f_983)
					{
						UNK_0x1E9649458B15960F(UNK_0x16F2683693E537C9(), false);
						func_202(uParam0);
						uParam0->f_983 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_868.f_2)
			{
				UNK_0x486B4ADE317F0689();
				func_90(&(uParam0->f_868));
			}
		}
		bVar1 = false;
		while (bVar1 < 5)
		{
			if (uParam0->f_956[bVar1 /*5*/])
			{
				if (!uParam0->f_956[bVar1 /*5*/].f_1)
				{
					if (UNK_0x27117E2CDD4D67C3(uParam0->f_956[bVar1 /*5*/].f_4))
					{
						uParam0->f_956[bVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_956[bVar1 /*5*/].f_2)
				{
					if (uParam0->f_956[bVar1 /*5*/].f_1)
					{
						func_90(&(uParam0->f_956[bVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			bVar1++;
		}
		if (bVar0)
		{
			uParam0->f_982 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int func_308(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (func_207(vParam1) || fParam4 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_868)
	{
		if (func_95(uParam0->f_868.f_4, vParam1, 0) && uParam0->f_868.f_10 == fParam4)
		{
			uParam0->f_868.f_2 = 0;
			if (!uParam0->f_868.f_1)
			{
				uParam0->f_982 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	UNK_0x9E632F16E887F781(vParam1, fParam4, iParam5);
	uParam0->f_868 = 1;
	uParam0->f_868.f_3 = UNK_0x1C0640BA9A7327B3();
	uParam0->f_868.f_4 = { vParam1 };
	uParam0->f_868.f_7 = { 0f, 0f, 0f };
	uParam0->f_868.f_10 = fParam4;
	uParam0->f_982 = 1;
	return 1;
}

void func_309(int iParam0, var uParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1219.186f, -2977.9f, 4.8653f };
			*bParam2 = 178.1887f;
			break;
		case 1:
			*uParam1 = { 1272.398f, -2982.072f, -3.2414f };
			*bParam2 = 201.5542f;
			break;
		case 2:
			*uParam1 = { 297.5948f, -2950.354f, 5.0008f };
			*bParam2 = 359.1976f;
			break;
		case 3:
			*uParam1 = { -317.3936f, -2610.798f, 5.0003f };
			*bParam2 = 328.0017f;
			break;
	}
}

bool func_310()
{
	return UNK_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

void func_311(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_879[iVar0 /*5*/])
		{
			uParam0->f_879[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_930[iVar0 /*5*/])
		{
			uParam0->f_930[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_868)
	{
		uParam0->f_868.f_2 = 1;
	}
	if (uParam0->f_860)
	{
		uParam0->f_860.f_2 = 1;
	}
	if (uParam0->f_864)
	{
		uParam0->f_864.f_2 = 1;
	}
}

void func_312()
{
	if (UNK_0x39B7A3CCD2467CAB())
	{
		UNK_0x152C90FB9FE48DAC();
		UNK_0x5C8D148FC238F38A();
		while (UNK_0x39B7A3CCD2467CAB())
		{
			SYSTEM::WAIT(0);
		}
	}
	func_208();
	if (func_107(Local_55[0 /*2*/]))
	{
		UNK_0xD30E2F394BD927B3(Local_55[0 /*2*/], vLocal_166);
	}
	Global_95241.f_357 = 0;
	if (bLocal_384)
	{
		UNK_0xBCD4D622B825D37C(&iLocal_439);
		bLocal_384 = false;
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (8 - 1))
	{
		func_320(&(Local_64[iLocal_382 /*10*/].f_2));
		if (UNK_0xC844350D5D58C99A(Local_64[iLocal_382 /*10*/]) && !UNK_0xEB6A8945D1AC98A1(Local_64[iLocal_382 /*10*/]))
		{
			if (UNK_0x405E212DDE472467(Local_64[iLocal_382 /*10*/], 0))
			{
				UNK_0x9E56B0ABD396F5CA(Local_64[iLocal_382 /*10*/], UNK_0x68F4C0EC296D3901(UNK_0x6937EA2286828455(Local_64[iLocal_382 /*10*/], 0), true) + Vector(0f, -2f, 0f));
			}
			func_319(&(Local_64[iLocal_382 /*10*/]));
		}
		iLocal_382++;
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (4 - 1))
	{
		if (UNK_0xC844350D5D58C99A(Local_55[iLocal_382 /*2*/]))
		{
			func_318(Local_55[iLocal_382 /*2*/]);
			func_315(&(Local_55[iLocal_382 /*2*/]));
		}
		iLocal_382++;
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (9 - 1))
	{
		if (UNK_0xC844350D5D58C99A(Local_169[iLocal_382 /*2*/]))
		{
			func_314(&(Local_169[iLocal_382 /*2*/]));
		}
		iLocal_382++;
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_380))
	{
		UNK_0xF7E25143642732EA(iLocal_380, 0);
	}
	func_287();
	func_42(&Local_188, 1, 0);
	func_313(72);
	func_197(1, 0, 0, 3000, 0);
	UNK_0x51B096AAC60548C1(1f);
	UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x2B9CF4095FF44019(UNK_0xD803B885F5E47A62());
		UNK_0xA3BF0AA5A2608191(UNK_0x16F2683693E537C9());
		UNK_0x536F1BE96C726C4B(UNK_0x68F4C0EC296D3901(UNK_0x16F2683693E537C9(), true), 300f, 1, 0, 0, false);
	}
	UNK_0x536F1BE96C726C4B(1219.186f, -2977.9f, 4.8653f, 300f, 1, 0, 0, false);
	iLocal_403 = UNK_0x1C0640BA9A7327B3();
	bLocal_386 = false;
	bLocal_404 = false;
	iLocal_399 = 0;
	iLocal_400 = 0;
	iLocal_401 = 0;
	iLocal_458 = 0;
	bLocal_387 = false;
	func_216(6, 0);
	if (UNK_0xBCFF5481C5F58C19("PO1_08_sub_waterplane"))
	{
		func_202(&uLocal_460);
		UNK_0x81CF20E10AAD5FD5("PO1_08_sub_waterplane");
	}
	UNK_0xE96F19797E59AB06();
}

void func_313(int iParam0)
{
	if (Global_95666 != -1)
	{
		if (iParam0 == Global_95666)
		{
			Global_95670 = 1;
			return;
		}
	}
}

void func_314(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (UNK_0xBDEB2DEEF1D23A18(*bParam0))
		{
			UNK_0x15AFB6CBDE990FB6(*bParam0, 1, true);
		}
		UNK_0xF690C84DADBB3551(bParam0);
	}
}

void func_315(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0xAF6690C489CC6203(*bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
		}
		if (func_317(*bParam0))
		{
			if (UNK_0xAF6690C489CC6203(*bParam0) && UNK_0x9C77D2D0559097F0(*bParam0, 1))
			{
				if (func_316(UNK_0x16F2683693E537C9()))
				{
					if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0))
					{
						UNK_0x046C362CF15F1935(bParam0);
						return;
					}
				}
				UNK_0xA954465BA6FDEFE2(bParam0);
			}
		}
		else
		{
			if (func_316(UNK_0x16F2683693E537C9()))
			{
				if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), *bParam0, 0))
				{
					UNK_0x046C362CF15F1935(bParam0);
					return;
				}
			}
			UNK_0xA954465BA6FDEFE2(bParam0);
		}
	}
}

bool func_316(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (!UNK_0x437347B10A200C4B(bParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_317(bool bParam0)
{
	if (func_316(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			if (!UNK_0x4E861BC5B1EDA7BD(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_318(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (UNK_0xC844350D5D58C99A(bParam0))
	{
		if (UNK_0xDF1306B443CD3D15(bParam0, 0))
		{
			bVar0 = UNK_0xA30B8362589C124A(bParam0, -1, 0);
			if (UNK_0xC844350D5D58C99A(bVar0))
			{
				if (!UNK_0xEB6A8945D1AC98A1(bVar0))
				{
					UNK_0x327AAEE25F323797(bVar0);
				}
				else
				{
					UNK_0xEBA53F35D0085654(&bVar0);
				}
			}
			iVar2 = UNK_0xD6DF381716822EFE(bParam0);
			bVar1 = false;
			while (bVar1 < iVar2)
			{
				if (!UNK_0xBBA8A868118C90ED(bParam0, bVar1, 0))
				{
					bVar0 = UNK_0xA30B8362589C124A(bParam0, bVar1, 0);
					if (UNK_0xC844350D5D58C99A(bVar0))
					{
						if (!UNK_0xEB6A8945D1AC98A1(bVar0))
						{
							UNK_0x327AAEE25F323797(bVar0);
						}
						else
						{
							UNK_0xEBA53F35D0085654(&bVar0);
						}
					}
				}
				bVar1++;
			}
		}
	}
}

void func_319(bool bParam0)
{
	if (UNK_0xC844350D5D58C99A(*bParam0))
	{
		if (!UNK_0x437347B10A200C4B(*bParam0, 0))
		{
			UNK_0xE8832A9E16A57A1F(*bParam0, false, 1);
		}
		if (!UNK_0xAF6690C489CC6203(*bParam0))
		{
			UNK_0x73270B3C9CC833FD(*bParam0, true, 0);
		}
		UNK_0xEBA53F35D0085654(bParam0);
	}
}

void func_320(bool bParam0)
{
	bool bVar0;
	struct<8> Var1;

	if (UNK_0xE4EDC4B0E92C078B(*bParam0))
	{
		UNK_0x142CC44DB769B57E(bParam0);
		bVar0 = true;
	}
	if (UNK_0xE4EDC4B0E92C078B(bParam0->f_1))
	{
		UNK_0x142CC44DB769B57E(&(bParam0->f_1));
		bVar0 = true;
	}
	if (UNK_0xC844350D5D58C99A(bParam0->f_7))
	{
		if (!UNK_0x437347B10A200C4B(bParam0->f_7, 0))
		{
			if (UNK_0x3C583F939C836C5C(bParam0->f_7))
			{
				UNK_0xA29E145196B9739D(bParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*bParam0 = { Var1 };
	}
}

void func_321()
{
	switch (iLocal_2102)
	{
		case 1:
			iLocal_2102 = 2;
			iLocal_2104 = -1;
			break;
		case 2:
			iLocal_2102 = 3;
			iLocal_2104 = 0;
			iLocal_2103 = iLocal_2105;
			break;
		case 3:
			iLocal_2105 = -1;
			iLocal_2102 = 0;
			break;
		case 0:
			if ((UNK_0x1C0640BA9A7327B3() - iLocal_2106) > 2500)
			{
				iLocal_2106 = UNK_0x1C0640BA9A7327B3();
			}
			break;
	}
}

void func_322(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (UNK_0x39B7A3CCD2467CAB())
	{
		if (UNK_0x75EECC9B0572F772())
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!UNK_0xEA6BC48857E0AC4C(uParam0[iVar0 /*82*/]))
				{
					bVar1 = false;
					while (bVar1 < 12)
					{
						if ((uParam0[iVar0 /*82*/])->f_17.f_13[bVar1] != -1 && (uParam0[iVar0 /*82*/])->f_17[bVar1] != -1)
						{
							UNK_0x7656EB524FEAB9B3(uParam0[iVar0 /*82*/], bVar1, (uParam0[iVar0 /*82*/])->f_17.f_13[bVar1], (uParam0[iVar0 /*82*/])->f_17[bVar1], (uParam0[iVar0 /*82*/])->f_16);
							(uParam0[iVar0 /*82*/])->f_17.f_13[bVar1] = -1;
							(uParam0[iVar0 /*82*/])->f_17[bVar1] = -1;
						}
						bVar1++;
					}
					bVar2 = false;
					while (bVar2 < 9)
					{
						if ((uParam0[iVar0 /*82*/])->f_17.f_39[bVar2] != -1 && (uParam0[iVar0 /*82*/])->f_17.f_49[bVar2] != -1)
						{
							UNK_0xA2888AACD3C45CCA(uParam0[iVar0 /*82*/], bVar2, (uParam0[iVar0 /*82*/])->f_17.f_39[bVar2], (uParam0[iVar0 /*82*/])->f_17.f_49[bVar2], (uParam0[iVar0 /*82*/])->f_16);
							(uParam0[iVar0 /*82*/])->f_17.f_39[bVar2] = -1;
							(uParam0[iVar0 /*82*/])->f_17.f_49[bVar2] = -1;
						}
						bVar2++;
					}
					StringCopy(uParam0[iVar0 /*82*/], "", 64);
					(uParam0[iVar0 /*82*/])->f_16 = 0;
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_323(uParam0);
	}
}

void func_323(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!UNK_0xEA6BC48857E0AC4C(uParam0[iVar0 /*82*/]))
		{
			StringCopy(uParam0[iVar0 /*82*/], "", 64);
			(uParam0[iVar0 /*82*/])->f_16 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				(uParam0[iVar0 /*82*/])->f_17.f_13[iVar1] = -1;
				(uParam0[iVar0 /*82*/])->f_17[iVar1] = -1;
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_324(var uParam0)
{
	func_307(uParam0);
}

void func_325()
{
	vector3 vVar0;
	var uVar3;

	if (func_298() || func_7(0))
	{
		if (func_298())
		{
			iLocal_2108 = func_329();
			if (Global_92921)
			{
				iLocal_2108++;
			}
			if (iLocal_2108 >= 3)
			{
				iLocal_2108 = 3;
			}
		}
		else if (func_7(0))
		{
			iLocal_2108 = 0;
		}
		if (func_298())
		{
			func_309(iLocal_2108, &vVar0, &uVar3);
			func_328(vVar0, uVar3, 1, 0);
		}
		SYSTEM::SETTIMERA(0);
		bLocal_2107 = true;
	}
	else
	{
		func_108(0, "STAGE 0: REACH SUB", 0, 0, 0, 1);
		iLocal_2103 = 0;
		func_271(0);
	}
	iLocal_2104 = 0;
	if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	}
	UNK_0xD8405188BF24D722("EXTRASUNNY");
	UNK_0xE21702DBF1967A40(UNK_0xD803B885F5E47A62(), 0);
	UNK_0x51732B934211201A(bLocal_394);
	UNK_0x51732B934211201A(bLocal_395);
	UNK_0xF63400DBE3303D26("REL_BUDDY", &bLocal_394);
	UNK_0xF63400DBE3303D26("rel_dock", &bLocal_395);
	UNK_0x0E2400AB9174FA81(5, bLocal_395, joaat("PLAYER"));
	UNK_0x0E2400AB9174FA81(1, joaat("PLAYER"), bLocal_394);
	UNK_0x0E2400AB9174FA81(1, bLocal_394, joaat("PLAYER"));
	UNK_0x0E2400AB9174FA81(1, bLocal_395, bLocal_395);
	if (!UNK_0xC844350D5D58C99A(Local_55[0 /*2*/]))
	{
		if (UNK_0xC844350D5D58C99A(Global_95241[0]))
		{
			UNK_0x73270B3C9CC833FD(Global_95241[0], true, 1);
			Local_55[0 /*2*/] = Global_95241[0];
			func_305(Local_55[0 /*2*/], 0);
			UNK_0x3E5CE368CD085FFA(Local_55[0 /*2*/], 1);
		}
	}
	if (!UNK_0xC844350D5D58C99A(Local_64[4 /*10*/]))
	{
		if (UNK_0xC844350D5D58C99A(Global_95241.f_9[0]))
		{
			UNK_0x73270B3C9CC833FD(Global_95241.f_9[0], true, 1);
			Local_64[4 /*10*/] = Global_95241.f_9[0];
			UNK_0x6DF7BF67E86AAE86(Local_64[4 /*10*/], bLocal_395);
			UNK_0x4E885A246A9D983A(Local_64[4 /*10*/], 208, true);
			UNK_0xCF443519BC24A3CB(Local_64[4 /*10*/], 45f);
			UNK_0xBEC9D6BBD21A735F(Local_64[4 /*10*/], 50f);
			UNK_0x8979D9784F39DF46(Local_64[4 /*10*/], -50f);
		}
	}
	if (!UNK_0xC844350D5D58C99A(Local_169[0 /*2*/]))
	{
		if (UNK_0xC844350D5D58C99A(Global_95241.f_28[0]))
		{
			UNK_0x73270B3C9CC833FD(Global_95241.f_28[0], true, 1);
			Local_169[0 /*2*/] = Global_95241.f_28[0];
		}
	}
	if (!UNK_0xC844350D5D58C99A(Local_169[1 /*2*/]))
	{
		if (UNK_0xC844350D5D58C99A(Global_95241.f_28[1]))
		{
			UNK_0x73270B3C9CC833FD(Global_95241.f_28[1], true, 1);
			Local_169[1 /*2*/] = Global_95241.f_28[1];
		}
	}
	if (!UNK_0xC844350D5D58C99A(Local_169[2 /*2*/]))
	{
		if (UNK_0xC844350D5D58C99A(Global_95241.f_28[2]))
		{
			UNK_0x73270B3C9CC833FD(Global_95241.f_28[2], true, 1);
			Local_169[2 /*2*/] = Global_95241.f_28[2];
		}
	}
	if (!UNK_0xC844350D5D58C99A(Local_169[3 /*2*/]))
	{
		if (UNK_0xC844350D5D58C99A(Global_95241.f_28[3]))
		{
			UNK_0x73270B3C9CC833FD(Global_95241.f_28[3], true, 1);
			Local_169[3 /*2*/] = Global_95241.f_28[3];
		}
	}
	if (Global_95241.f_357)
	{
		if (UNK_0x3D8490C463E91AC3(&(Global_95241.f_37[0])))
		{
			UNK_0xA2E90B046878B38C(Global_95241.f_37[0], 1, 1);
			Local_145[0 /*5*/] = Global_95241.f_37[0];
			Global_95241.f_37[0] = 0;
		}
		if (UNK_0x3D8490C463E91AC3(&(Global_95241.f_37[1])))
		{
			UNK_0xA2E90B046878B38C(Global_95241.f_37[1], 1, 1);
			Local_145[1 /*5*/] = Global_95241.f_37[1];
			Global_95241.f_37[1] = 0;
		}
		if (UNK_0x3D8490C463E91AC3(&(Global_95241.f_37[2])))
		{
			UNK_0xA2E90B046878B38C(Global_95241.f_37[2], 1, 1);
			Local_145[2 /*5*/] = Global_95241.f_37[2];
			Global_95241.f_37[2] = 0;
		}
		if (UNK_0x3D8490C463E91AC3(&(Global_95241.f_37[3])))
		{
			UNK_0xA2E90B046878B38C(Global_95241.f_37[3], 1, 1);
			Local_145[3 /*5*/] = Global_95241.f_37[3];
			Global_95241.f_37[3] = 0;
		}
		bLocal_383 = true;
	}
	else
	{
		bLocal_383 = false;
	}
	UNK_0xD7992BEF7A9D109E("DOCKP1", false);
	while (!UNK_0x67C1D9E5B91B2E37(false))
	{
		SYSTEM::WAIT(0);
	}
	if (func_107(UNK_0x16F2683693E537C9()))
	{
		func_224(&uLocal_213, 0, UNK_0x16F2683693E537C9(), "TREVOR", 0, 1);
	}
	func_327(1);
	UNK_0x34D79252800B23FF(2);
	UNK_0x51B096AAC60548C1(0.5f);
	func_326(72);
}

void func_326(int iParam0)
{
	Global_94599 = 0;
	switch (iParam0)
	{
		case 72:
			func_264(2);
			func_264(4);
			break;
		case 73:
			func_264(0);
			func_264(1);
			func_264(7);
			break;
		case 92:
			func_264(10);
			func_264(9);
			func_264(13);
			func_264(6);
			break;
		case 68:
			func_264(11);
			break;
		case 78:
			func_264(14);
			break;
		case 79:
			func_264(3);
			break;
		default:
			break;
	}
}

void func_327(bool bParam0)
{
	if (bParam0)
	{
		Global_20861 = 1;
	}
	else
	{
		Global_20861 = 0;
	}
}

void func_328(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_298())
	{
		UNK_0x256D93AFAE851A7A(0);
		UNK_0x0674E58A79778E99(&(Global_98744.f_20), 2);
		UNK_0x21387C9EECC2B220(true);
		if (UNK_0xE1DBBD6CE209517C(UNK_0xD803B885F5E47A62()))
		{
			UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), false, false);
		}
		Global_98740 = { vParam0 };
		Global_98743 = iParam3;
		Global_98739 = 1;
		if (iParam4 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 14);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_98744.f_20), 14);
		}
		if (iParam5 == 1)
		{
			UNK_0x5D96D8530B3D0904(&(Global_98744.f_20), 24);
		}
		else
		{
			UNK_0x0674E58A79778E99(&(Global_98744.f_20), 24);
		}
		func_297(1);
	}
}

int func_329()
{
	if (!Global_98744 == 10 && !Global_98744 == 9)
	{
		return 0;
	}
	return Global_98744.f_2;
}

void func_330()
{
	if (UNK_0x39B7A3CCD2467CAB())
	{
		UNK_0x152C90FB9FE48DAC();
		UNK_0x5C8D148FC238F38A();
	}
	if (func_107(UNK_0x16F2683693E537C9()))
	{
		if (func_107(Local_55[0 /*2*/]))
		{
			if (UNK_0xC42A92762C58E1B9(UNK_0x16F2683693E537C9(), Local_55[0 /*2*/], 0))
			{
				UNK_0x9E56B0ABD396F5CA(UNK_0x16F2683693E537C9(), UNK_0x68F4C0EC296D3901(Local_55[0 /*2*/], true) + Vector(2f, 0f, 0f));
			}
		}
	}
	func_208();
	if (func_107(Local_55[0 /*2*/]))
	{
		UNK_0xD30E2F394BD927B3(Local_55[0 /*2*/], vLocal_166);
	}
	Global_95241.f_357 = 0;
	if (bLocal_384)
	{
		UNK_0xBCD4D622B825D37C(&iLocal_439);
		bLocal_384 = false;
	}
	if (UNK_0x83A8177D302E1A7E(iLocal_380))
	{
		UNK_0xF7E25143642732EA(iLocal_380, 0);
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (8 - 1))
	{
		if (func_107(Local_64[iLocal_382 /*10*/]))
		{
			func_320(&(Local_64[iLocal_382 /*10*/].f_2));
			if (UNK_0xE4EDC4B0E92C078B(Local_64[iLocal_382 /*10*/].f_1))
			{
				UNK_0x142CC44DB769B57E(&(Local_64[iLocal_382 /*10*/].f_1));
			}
			if (UNK_0x16102BEDC7435774(Local_64[iLocal_382 /*10*/]))
			{
				UNK_0x0A94A109271BE75A(Local_64[iLocal_382 /*10*/]);
			}
			if (Local_64[iLocal_382 /*10*/] != UNK_0x16F2683693E537C9())
			{
				func_9(&(Local_64[iLocal_382 /*10*/]), 1, 0, 1);
			}
		}
		iLocal_382++;
	}
	iLocal_382 = 0;
	while (iLocal_382 <= (4 - 1))
	{
		if (UNK_0xE4EDC4B0E92C078B(Local_55[iLocal_382 /*2*/].f_1))
		{
			UNK_0x142CC44DB769B57E(&(Local_55[iLocal_382 /*2*/].f_1));
		}
		if (func_107(Local_55[iLocal_382 /*2*/]))
		{
			if (iLocal_382 != 0)
			{
				func_292(&(Local_55[iLocal_382 /*2*/]));
			}
		}
		iLocal_382++;
	}
	func_332(0);
	iLocal_382 = 0;
	while (iLocal_382 <= (9 - 1))
	{
		if (UNK_0xC844350D5D58C99A(Local_169[iLocal_382 /*2*/]))
		{
			if (Local_169[iLocal_382 /*2*/] == Local_169[4 /*2*/] || Local_169[iLocal_382 /*2*/] == Local_169[5 /*2*/])
			{
				func_91(&(Local_169[iLocal_382 /*2*/]), 1);
			}
			else
			{
				func_314(&(Local_169[iLocal_382 /*2*/]));
			}
		}
		iLocal_382++;
	}
	if (!UNK_0xEB6A8945D1AC98A1(UNK_0x16F2683693E537C9()))
	{
		UNK_0x98E4DC66A651C9FA(UNK_0xD803B885F5E47A62(), true, false);
	}
	UNK_0xE21702DBF1967A40(UNK_0xD803B885F5E47A62(), 1);
	UNK_0x96D521DDDB9AD218();
	UNK_0x51B096AAC60548C1(1f);
	UNK_0x34D79252800B23FF(5);
	UNK_0xBFE31971E49FA500(1);
	UNK_0x8BCB70EB440DED83(1);
	func_327(0);
	func_217(&Local_188, 0);
	func_331();
	if (UNK_0xBCFF5481C5F58C19("PO1_08_sub_waterplane"))
	{
		UNK_0x81CF20E10AAD5FD5("PO1_08_sub_waterplane");
	}
	UNK_0x10FAF14A60A0DBE1();
}

void func_331()
{
	Global_94599 = 0;
}

void func_332(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_110694, UNK_0xBB0808A181D4745C(), 24);
		Global_110688 = 1;
	}
	else
	{
		StringCopy(&Global_110694, "NULL", 24);
		Global_110688 = 0;
	}
}

void func_333()
{
	int iVar0;

	if (UNK_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_7(0))
	{
		if (!func_334())
		{
			iVar0 = func_5();
			if (iVar0 != -1)
			{
				if (!func_100(iVar0))
				{
					return;
				}
				UNK_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_105();
		}
	}
}

bool func_334()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return false;
	}
	return true;
}

void func_335()
{
	func_94(787.0854f, -2973.872f, 5.0585f, 256.91f);
}

